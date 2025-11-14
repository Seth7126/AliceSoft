// 函数: sub_65b880
// 地址: 0x65b880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg4 s<= 0x20)
    int32_t* var_1c = arg3
    int32_t* var_20 = arg6
    return sub_660980(arg3, arg2)

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(arg4 + 1)
int32_t edi_1 = (eax_3 - edx) s>> 1
int32_t* ebp_2 = &arg3[edi_1 * 0x30]
int32_t eax_5 = sub_65baa0(arg5)
char eax_7
int32_t esi_1

if (edi_1 s> eax_5)
    sub_65b880(edi_1, arg5, arg6)
    esi_1 = arg4 - edi_1
    eax_7 = sub_65b880(esi_1, arg5, arg6)
else
    esi_1 = arg4 - edi_1
    eax_7 = sub_65d540(sub_65d540(eax_5, ebp_2, arg3, edi_1, arg5, arg6), arg2, ebp_2, esi_1, arg5, 
        arg6)

return sub_65d610(eax_7, ebp_2, arg3, arg2, edi_1, esi_1, arg5, arg6)
