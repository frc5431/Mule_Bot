#include <WPILib.h>
#include <CANTalon.h>

CANTalon * fl = new CANTalon(11);
CANTalon * rl = new CANTalon(9);
CANTalon * fr = new CANTalon(3);
CANTalon * rr = new CANTalon(10);
frc::RobotDrive* robotDrive = new frc::RobotDrive(fl,rl,fr,rr);
Joystick* xBox = new Joystick(0);

class Robot: public frc::IterativeRobot {
public:
	void RobotInit() {
	}


	void AutonomousInit() {
	}

	void AutonomousPeriodic() {
	}

	void TeleopInit() {

	}

	void TeleopPeriodic() {
		double leftDrive = xBox->GetRawAxis(1);
		double rightDrive = xBox->GetRawAxis(5);
		robotDrive->TankDrive(leftDrive,rightDrive,false);
	}

};

START_ROBOT_CLASS(Robot)
