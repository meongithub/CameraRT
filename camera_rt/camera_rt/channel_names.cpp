#include "stdafx.h"
#include "channel_names.h"
namespace ptz_camera_req_channels
{
	const char* discovery_req_channel = "DISCOVERYREQ";
	const char* init_session_req_channel = "INITSESSIONREQ";
	const char* end_session_req_channel = "ENDSESSIONREQ";
	const char* stream_req_channel = "STREAMURIREQ";
	const char* ptz_control_req_channel = "PTZCONTROLREQ";
	const char* position_req_channel = "POSITIONREQ";
	const char* stop_ptz_control_req_channel = "STOPPTZCONTROLREQ";
	const char* preset_config_req_channel = "PRESETCONFREQ";
	const char* preset_move_req_channel = "PRESETMOVEREQ";
	const char* start_program_req_channel = "STARTPROGRAMREQ";
	const char* stop_program_req_channel = "STOPPROGRAMREQ";
	const char* output_req_channel = "OUTPUTREQ";
 }

namespace ptz_camera_res_channels
{	
	const char* discovery_res_channel = "DISCOVERYRES";
	const char* init_session_res_channel = "INITSESSIONRES";
	const char* end_session_res_channel = "ENDSESSIONRES";
	const char* stream_res_channel = "STREAMURIRES";
	const char* ptz_control_res_channel = "PTZCONTROLRES";
	const char* position_res_channel = "POSITIONRES";
	const char* stop_ptz_control_res_channel = "STOPPTZCONTROLRES";
	const char* preset_config_res_channel = "PRESETCONFRES";
	const char* preset_move_res_channel = "PRESETMOVERES";
	const char* start_program_res_channel = "STARTPROGRAMRES";
	const char* stop_program_res_channel = "STOPPROGRAMRES";
}

namespace ptz_camera_message_channels
{
	const char* program_status_mes_channel = "PROGRAMSTATMES";
	const char* end_program_mes_channel = "ENDPROGRAMMES";
}