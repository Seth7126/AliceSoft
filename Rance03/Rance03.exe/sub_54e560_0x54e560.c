// 函数: sub_54e560
// 地址: 0x54e560
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_54eb60(arg1)
    
    int32_t* ecx_5 = arg1[1]
    
    if (ecx_5 != 0)
        *ecx_5 = *arg2
        ecx_5[1] = arg2[1]
        ecx_5[2] = &sealengine::CFrameIndex::`vftable'
        ecx_5[3] = arg2[3]
        ecx_5[4] = arg2[4]
else
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_54eb60(arg1)
    
    int32_t* edx_3 = *arg1 + (arg2 - eax) s/ 0x14 * 0x14
    int32_t* ecx_3 = arg1[1]
    
    if (ecx_3 != 0)
        *ecx_3 = *edx_3
        ecx_3[1] = edx_3[1]
        ecx_3[2] = &sealengine::CFrameIndex::`vftable'
        ecx_3[3] = edx_3[3]
        ecx_3[4] = edx_3[4]
        arg1[1] += 0x14
        return 

arg1[1] += 0x14
