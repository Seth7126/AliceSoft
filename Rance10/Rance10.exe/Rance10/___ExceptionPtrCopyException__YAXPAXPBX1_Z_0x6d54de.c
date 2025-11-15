// 函数: ?__ExceptionPtrCopyException@@YAXPAXPBX1@Z
// 地址: 0x6d54de
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_c = arg3
int32_t* result = std::shared_ptr<class __ExceptionPtr>::operator=(arg4, 
    __ExceptionPtr::_CopyException(&var_c, arg5, arg6, 1))

if (arg3 == 0)
    return result

return sub_563db0(arg3)
