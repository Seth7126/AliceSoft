// 函数: sub_54e3b0
// 地址: 0x54e3b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_54e7f0(arg1)
    
    int32_t* ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        *ecx_4 = *arg2
        ecx_4[1] = arg2[1]
        ecx_4[2] = &sealengine::CFrameMulAlpha::`vftable'
        ecx_4[3] = arg2[3]
        ecx_4[4] = arg2[4]
else
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x66666667, arg2 - eax)
    int32_t edx_2 = edx_1 s>> 3
    
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_54e7f0(arg1)
    
    int32_t* ecx_2 = arg1[1]
    int32_t edx_3 = ((edx_2 u>> 0x1f) + edx_2) * 5
    int32_t edi_5 = *arg1
    
    if (ecx_2 != 0)
        *ecx_2 = *(edi_5 + (edx_3 << 2))
        ecx_2[1] = *(edi_5 + (edx_3 << 2) + 4)
        ecx_2[2] = &sealengine::CFrameMulAlpha::`vftable'
        ecx_2[3] = *(edi_5 + (edx_3 << 2) + 0xc)
        ecx_2[4] = *(edi_5 + (edx_3 << 2) + 0x10)
        arg1[1] += 0x14
        return 

arg1[1] += 0x14
