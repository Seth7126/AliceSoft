// 函数: __beginthreadex
// 地址: 0x703a04
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_8 = arg3
uint32_t threadId = arg3

if (arg6 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return nullptr

int32_t edi
int32_t var_14_1 = edi
int32_t* lpParameter = create_thread_parameter(arg6, arg7)
HANDLE result

if (lpParameter == 0)
    result = nullptr
else
    result = CreateThread(arg4, arg5, thread_start<uint32_t (__stdcall*)(void*)>, lpParameter, 
        arg8, &threadId)
    
    if (result != 0)
        if (arg9 != 0)
            *arg9 = threadId
        
        lpParameter = nullptr
    else
        ___acrt_errno_map_os_error(GetLastError())
        result = nullptr

x58bb9154::thread_parameter_free_policy::operator[]::thread_parameter_free_policy::operator()(
    lpParameter)
return result
