#pragma once
#include "ibaseclientdll.hpp"
#include "icliententitylist.hpp"
#include "ivengineclient.hpp"
#include "iclientmode.hpp"
#include "iclientstate.hpp"
#include "ipanel.hpp"
#include "isurface.hpp"
#include "cglobalvarsbase.hpp"
#include "imaterialsystem.hpp"
#include "ivmodelinfo.hpp"
#include "ivmodelrender.hpp"
#include "ivdebugoverlay.hpp"
#include "iconsole.hpp"
#include "ilocalize.hpp"
#include "igameeventmanager.hpp"
#include "iinput.hpp"
#include "iveffects.hpp"
#include "iinputsystem.hpp"
#include "ivrenderview.hpp"
#include "ivtraceray.hpp"
#include "../../source-sdk/math/ienginetrace.hpp"
namespace interfaces {
	extern i_base_client_dll* client;
	extern i_input* input;
	extern CGlowObjectManager* m_pGlowObjManager;
	extern i_engine_trace* trace;
	extern i_client_entity_list* entity_list;
	extern iv_engine_client* engine;
	extern i_client_mode* clientmode;
	extern i_client_state* clientstate;
	extern i_panel* panel;
	extern i_surface* surface;
	extern c_global_vars_base* globals;
	extern i_material_system* material_system;
	extern iv_model_info* model_info;
	extern iv_model_render* model_render;
	extern i_render_view* render_view;
	extern iv_effects* effects;
	extern iv_debug_overlay* debug_overlay;
	extern i_console* console;
	extern i_localize* localize;
	extern i_game_event_manager* event_manager;
	extern i_inputsytem* inputsystem;
	extern IDirect3DDevice9* directx;

	void initialize( );
}