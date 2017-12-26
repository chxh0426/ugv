﻿// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#include "../behaviac_types.h"

// -------------------
// Customized enums
// -------------------

BEHAVIAC_BEGIN_ENUM_EX(DriveState, DriveState)
{
	BEHAVIAC_ENUMCLASS_DISPLAY_INFO_EX(L"DriveState", L"");

	BEHAVIAC_ENUM_ITEM_EX(Tracking, "Tracking");
	BEHAVIAC_ENUM_ITEM_EX(TrackingLane, "TrackingLane");
	BEHAVIAC_ENUM_ITEM_EX(Following, "Following");
	BEHAVIAC_ENUM_ITEM_EX(ChangingLane, "ChangingLane");
	BEHAVIAC_ENUM_ITEM_EX(Backing, "Backing");
	BEHAVIAC_ENUM_ITEM_EX(Avoidance, "Avoidance");
	BEHAVIAC_ENUM_ITEM_EX(Holding, "Holding");
	BEHAVIAC_ENUM_ITEM_EX(InterSectionZone, "InterSectionZone");
	BEHAVIAC_ENUM_ITEM_EX(Estop, "Estop");
	BEHAVIAC_ENUM_ITEM_EX(Parking, "Parking");
	BEHAVIAC_ENUM_ITEM_EX(Unknow, "Unknow");
}
BEHAVIAC_END_ENUM_EX()

BEHAVIAC_BEGIN_ENUM_EX(System_Status, System_Status)
{
	BEHAVIAC_ENUMCLASS_DISPLAY_INFO_EX(L"System_Status", L"");

	BEHAVIAC_ENUM_ITEM_EX(good, "good");
	BEHAVIAC_ENUM_ITEM_EX(hardware_error, "hardware_error");
	BEHAVIAC_ENUM_ITEM_EX(sensor_data_error, "sensor_data_error");
	BEHAVIAC_ENUM_ITEM_EX(communication_error, "communication_error");
	BEHAVIAC_ENUM_ITEM_EX(vehicle_status_error, "vehicle_status_error");
	BEHAVIAC_ENUM_ITEM_EX(control_status_error, "control_status_error");
}
BEHAVIAC_END_ENUM_EX()

BEHAVIAC_BEGIN_ENUM_EX(LaneIdx, LaneIdx)
{
	BEHAVIAC_ENUMCLASS_DISPLAY_INFO_EX(L"LaneIdx", L"");

	BEHAVIAC_ENUM_ITEM_EX(Mid, "Mid");
	BEHAVIAC_ENUM_ITEM_EX(L, "L");
	BEHAVIAC_ENUM_ITEM_EX(LL, "LL");
	BEHAVIAC_ENUM_ITEM_EX(R, "R");
	BEHAVIAC_ENUM_ITEM_EX(RR, "RR");
}
BEHAVIAC_END_ENUM_EX()

BEHAVIAC_BEGIN_ENUM_EX(MAPFlags, MAPFlags)
{
	BEHAVIAC_ENUMCLASS_DISPLAY_INFO_EX(L"MAPFlags", L"");

	BEHAVIAC_ENUM_ITEM_EX(Straight_Road, "Straight_Road");
	BEHAVIAC_ENUM_ITEM_EX(Left_turn, "Left_turn");
	BEHAVIAC_ENUM_ITEM_EX(Right_turn, "Right_turn");
	BEHAVIAC_ENUM_ITEM_EX(U_turn, "U_turn");
	BEHAVIAC_ENUM_ITEM_EX(Tunnel, "Tunnel");
	BEHAVIAC_ENUM_ITEM_EX(CrossRoad, "CrossRoad");
	BEHAVIAC_ENUM_ITEM_EX(InterSection, "InterSection");
	BEHAVIAC_ENUM_ITEM_EX(Avoidence, "Avoidence");
	BEHAVIAC_ENUM_ITEM_EX(Stop_Line, "Stop_Line");
}
BEHAVIAC_END_ENUM_EX()

BEHAVIAC_BEGIN_ENUM_EX(Object_Type, Object_Type)
{
	BEHAVIAC_ENUMCLASS_DISPLAY_INFO_EX(L"Object_Type", L"");

	BEHAVIAC_ENUM_ITEM_EX(VEHICLE, "VEHICLE");
	BEHAVIAC_ENUM_ITEM_EX(PEDESTRIAN, "PEDESTRIAN");
	BEHAVIAC_ENUM_ITEM_EX(ANIMAL, "ANIMAL");
	BEHAVIAC_ENUM_ITEM_EX(BIKE, "BIKE");
	BEHAVIAC_ENUM_ITEM_EX(OBSTACLE, "OBSTACLE");
	BEHAVIAC_ENUM_ITEM_EX(UNKNOWN, "UNKNOWN");
}
BEHAVIAC_END_ENUM_EX()

