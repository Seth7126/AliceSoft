// 函数: sub_55a0a0
// 地址: 0x55a0a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_c = arg3

if (arg4 s<= 0x20)
    int32_t* var_1c = arg3
    void** var_20 = arg6
    return sub_55a410(arg3, arg2)

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(arg4 + 1)
int32_t ebx_1 = (eax_3 - edx) s>> 1
int32_t eax_5 = sub_534650(arg5)
char eax_7
int32_t esi_1

if (ebx_1 s> eax_5)
    sub_55a0a0(ebx_1, arg5, arg6)
    esi_1 = arg4 - ebx_1
    eax_7 = sub_55a0a0(esi_1, arg5, arg6)
else
    esi_1 = arg4 - ebx_1
    eax_7 = sub_55a150(sub_55a150(eax_5, &arg3[ebx_1], arg3, ebx_1, arg5, arg6), arg2, 
        &arg3[ebx_1], esi_1, arg5, arg6)

return sub_55a220(eax_7, &arg3[ebx_1], arg3, arg2, ebx_1, esi_1, arg5, arg6)
