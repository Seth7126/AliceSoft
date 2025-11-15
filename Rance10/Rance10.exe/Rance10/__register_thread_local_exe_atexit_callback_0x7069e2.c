// 函数: __register_thread_local_exe_atexit_callback
// 地址: 0x7069e2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0x20

if (data_7fc46c != __security_cookie)
    noreturn _terminate() __tailcall

int32_t result = __crt_fast_encode_pointer<void (__stdcall*)(struct _RTL_CONDITION_VARIABLE*)>(arg1)
data_7fc46c = result
return result
