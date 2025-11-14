// 函数: sub_5dd6b0
// 地址: 0x5dd6b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct IVMFuncList::sys43vm::CVMFuncList::VTable** var_4 = arg1
*arg1 = &sys43vm::CVMFuncList::`vftable'{for `IVMFuncList'}
int32_t** eax = arg1[4]
sub_417e10(&arg1[4], &var_4, *eax, eax)
j__free(arg1[4])
int32_t* result = arg1[1]

if (result != 0)
    sub_4107c0(result, arg1[2])
    result = j__free(arg1[1])
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

return result
