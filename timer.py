import tkinter as tk
from tkinter import messagebox

class CountdownTimer:
    def __init__(self, root):
        self.root = root
        self.root.title("Countdown Timer")
        self.root.geometry("400x200")
        self.root.configure(bg="black")
        
        self.time_var = tk.StringVar()
        self.time_var.set("00:00:00")
        
        self.label = tk.Label(root, text="Enter time (HH:MM:SS):", bg="black", fg="white", font=('Arial', 12))
        self.label.pack(pady=5)
        
        self.entry = tk.Entry(root, textvariable=self.time_var, width=15, font=('Arial', 14))
        self.entry.pack(pady=5)
        
        self.start_button = tk.Button(root, text="Start Timer", command=self.start_timer, font=('Arial', 12))
        self.start_button.pack(pady=5)
        
        self.timer_label = tk.Label(root, text="", font=('Arial', 48), bg="black", fg="white")
        self.timer_label.pack(pady=20)
        
        self.time_left = 0
        
    def start_timer(self):
        time_str = self.time_var.get()
        try:
            h, m, s = map(int, time_str.split(':'))
            self.time_left = h * 3600 + m * 60 + s
            self.update_timer()
        except ValueError:
            messagebox.showerror("Invalid time format", "Please enter the time in HH:MM:SS format.")
        
    def update_timer(self):
        if self.time_left > 0:
            mins, secs = divmod(self.time_left, 60)
            hrs, mins = divmod(mins, 60)
            time_format = '{:02d}:{:02d}:{:02d}'.format(hrs, mins, secs)
            self.timer_label.config(text=time_format)
            self.time_left -= 1
            self.root.after(1000, self.update_timer)
        else:
            self.timer_label.config(text="Time is up!")
            messagebox.showinfo("Countdown Timer", "Time is up!")

if __name__ == "__main__":
    root = tk.Tk()
    app = CountdownTimer(root)
    root.mainloop()
