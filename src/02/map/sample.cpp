/*
	  "virtualization-by-map": [
		"__local_stdio_printf_options",
		"printf",
		"main",
		"__security_check_cookie",
		"mainCRTStartup",
		"__raise_securityfailure",
		"__report_gsfailure",
		"__scrt_acquire_startup_lock",
		"__scrt_initialize_crt",
		"__scrt_initialize_onexit_tables",
		"__scrt_is_nonwritable_in_current_image",
		"__scrt_release_startup_lock",
		"__scrt_uninitialize_crt",
		"_onexit",
		"atexit",
		"__security_init_cookie",
		"__scrt_exe_initialize_mta",
		"__scrt_initialize_winrt",
		"__scrt_stub_for_initialize_mta",
		"_get_startup_commit_mode",
		"_get_startup_new_mode",
		"_get_startup_thread_locale_mode",
		"_matherr",
		"_get_startup_argv_mode",
		"_get_startup_file_mode",
		"?__scrt_initialize_type_info@@YAXXZ",
		"__acrt_initialize",
		"__acrt_uninitialize",
		"__scrt_stub_for_acrt_initialize",
		"__scrt_stub_for_acrt_uninitialize",
		"__vcrt_initialize",
		"__vcrt_uninitialize",
		"_should_initialize_environment",
		"_guard_check_icall_nop",
		"_initialize_denormal_control",
		"_initialize_invalid_parameter_handler",
		"__local_stdio_scanf_options",
		"__scrt_initialize_default_local_stdio_options",
		"__scrt_is_user_matherr_present",
		"__scrt_get_dyn_tls_init_callback",
		"__scrt_get_dyn_tls_dtor_callback",
		"__crt_debugger_hook",
		"__scrt_fastfail",
		"__scrt_initialize_mta",
		"__scrt_is_managed_app",
		"__scrt_set_unhandled_exception_filter",
		"__scrt_unhandled_exception_filter",
		"_RTC_Initialize",
		"_RTC_Terminate",
		"__isa_available_init",
		"__scrt_is_ucrt_dll_in_use",
		"__C_specific_handler",
		"__current_exception",
		"__current_exception_context",
		"memset",
		"_seh_filter_exe",
		"_set_app_type",
		"__setusermatherr",
		"_configure_narrow_argv",
		"_initialize_narrow_environment",
		"_get_initial_narrow_environment",
		"_initterm",
		"_initterm_e",
		"exit",
		"_exit",
		"_set_fmode",
		"__p___argc",
		"__p___argv",
		"_cexit",
		"_c_exit",
		"_register_thread_local_exe_atexit_callback",
		"_configthreadlocale",
		"_set_new_mode",
		"__p__commode",
		"_initialize_onexit_table",
		"_register_onexit_function",
		"_crt_atexit",
		"terminate",
		"memcpy",
		"_guard_dispatch_icall_nop",
		"_guard_xfg_dispatch_icall_nop",
		"?__scrt_common_main_seh@@YAHXZ",
		"?pre_c_initialization@@YAHXZ",
		"?post_pgo_initialization@@YAHXZ",
		"?pre_cpp_initialization@@YAXXZ",
		"capture_previous_context"
	  ]
---
vxlang.exe --opt-project temp.json --disable-core
*/

#include <stdio.h>
#include <stdint.h>

//

void VirtualizationTest() {
    for (int i = 0; i < 10; ++i) {
        printf("Hello, World! \n");
    }

    return;
}

int main() {
    VirtualizationTest();

    return 1;
}

