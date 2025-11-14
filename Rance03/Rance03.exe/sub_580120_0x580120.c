// 函数: sub_580120
// 地址: 0x580120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_c = arg3

if (arg4 s<= 0x20)
    int32_t* var_1c = arg3
    void** var_20 = arg6
    return sub_580ba0(arg3, arg2)

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(arg4 + 1)
int32_t ebx_1 = (eax_3 - edx) s>> 1
int32_t eax_5 = sub_534650(arg5)
char eax_7
int32_t esi_1

if (ebx_1 s> eax_5)
    sub_580120(ebx_1, arg5, arg6)
    esi_1 = arg4 - ebx_1
    eax_7 = sub_580120(esi_1, arg5, arg6)
else
    esi_1 = arg4 - ebx_1
    eax_7 = sub_5805d0(sub_5805d0(eax_5, &arg3[ebx_1], arg3, ebx_1, arg5, arg6), arg2, 
        &arg3[ebx_1], esi_1, arg5, arg6)

return sub_5806a0(eax_7, &arg3[ebx_1], arg3, arg2, ebx_1, esi_1, arg5, arg6)
