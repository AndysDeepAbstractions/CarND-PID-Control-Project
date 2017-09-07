# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

## Reflections

P Component : it compensates the actual error
I Component : it compensates the long term error
D Component : it compensates the overshooting

The Initial Hyperparameter (from the Lession) worked so there was no need for further adoptation.

Sidenotes : reproducing depends on the Framerate. 640x480 @ Fastest Quality works on my Laptop from 2012. This could be fixed by mesuring the FPS / Refreshtimes dt and add (by mult/div) this to the P & I Terms in UpdateError(). Reducing the throttle would also help to achive the goal easy exactly like a wider street would do :D. You can find another PID implimentation in my Behavioral Cloning Project.