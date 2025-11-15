// 函数: ?__ExceptionPtrCurrentException@@YAXPAX@Z
// 地址: 0x6d5523
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_c = arg3
__ExceptionPtr::_CurrentException(&var_c)
int32_t result = __ExceptionPtrCopy(arg4, &var_c)

if (arg3 == 0)
    return result

return sub_563db0(arg3)
