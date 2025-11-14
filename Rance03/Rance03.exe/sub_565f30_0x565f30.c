// 函数: sub_565f30
// 地址: 0x565f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_566b60(arg1)
    
    int32_t* ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        *ecx_4 = *arg2
        ecx_4[1] = arg2[1]
        ecx_4[2] = &sealengine::CEmitterPos::`vftable'
        *(ecx_4 + 0xc) = *(arg2 + 0xc)
        ecx_4[5] = arg2[5]
        ecx_4[6] = arg2[6]
        ecx_4[7] = arg2[7]
        ecx_4[8] = arg2[8]
else
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x38e38e39, arg2 - eax)
    int32_t edx_2 = edx_1 s>> 3
    
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_566b60(arg1)
    
    int32_t* ecx_2 = arg1[1]
    int32_t edx_3 = ((edx_2 u>> 0x1f) + edx_2) * 9
    int32_t edi_5 = *arg1
    
    if (ecx_2 != 0)
        *ecx_2 = *(edi_5 + (edx_3 << 2))
        ecx_2[1] = *(edi_5 + (edx_3 << 2) + 4)
        ecx_2[2] = &sealengine::CEmitterPos::`vftable'
        *(ecx_2 + 0xc) = *(edi_5 + (edx_3 << 2) + 0xc)
        ecx_2[5] = *(edi_5 + (edx_3 << 2) + 0x14)
        ecx_2[6] = *(edi_5 + (edx_3 << 2) + 0x18)
        ecx_2[7] = *(edi_5 + (edx_3 << 2) + 0x1c)
        ecx_2[8] = *(edi_5 + (edx_3 << 2) + 0x20)
        arg1[1] += 0x24
        return 

arg1[1] += 0x24
