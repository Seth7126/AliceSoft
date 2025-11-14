// 函数: sub_5b3980
// 地址: 0x5b3980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys43vm::CCallFuncProfiler::`vftable'
sub_5b3ef0(arg1)
arg1[0xc] = &win32only::CHighResolutionTimer::`vftable'
arg1[8] = &win32only::CHighResolutionTimer::`vftable'
int32_t* ecx = arg1[5]

if (ecx != 0)
    struct sys43vm::CCallFuncProfiler::VTable** var_c_1 = arg1
    int32_t* var_10_1 = ecx
    sub_5b4ce0(ecx, arg1[6])
    j__free(arg1[5])
    arg1[5] = 0
    arg1[6] = 0
    arg1[7] = 0

return sub_52c1c0(&arg1[2]) __tailcall
