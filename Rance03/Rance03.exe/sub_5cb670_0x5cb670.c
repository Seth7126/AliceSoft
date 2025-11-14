// 函数: sub_5cb670
// 地址: 0x5cb670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = arg1[0x82]
int32_t edi = *eax
arg1[0x82] = &eax[1]
int32_t* ecx_1 = arg1[0x28] - arg1[0x27]
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x38e38e39, ecx_1)
int32_t edx_1 = edx s>> 4
int32_t eax_5 = ecx_1 s/ 0x48

if (edi u< eax_5)
    ecx_1 = edi * 9
    eax_5 = arg1[0x27] + (ecx_1 << 3)
    
    if (eax_5 != 0)
        void** eax_7 = eax_5 + 8
        
        if (eax_7[5] u>= 0x10)
            eax_7 = *eax_7
        
        void** var_c = eax_7
        return sub_5c24e0(eax_7, edx_1, ecx_1, arg1, 0x6e9358)

return sub_5c24e0(eax_5, edx_1, ecx_1, arg1, 0x6e92d0)
