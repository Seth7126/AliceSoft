// 函数: sub_530640
// 地址: 0x530640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_3 = ecx
        sub_5306f0(arg1)
    
    struct sealengine::CDetectPolygon::VTable** ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        sub_530900(ecx_4, arg2)
else
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x3e0f83e1, arg2 - eax)
    int32_t edx_2 = edx_1 s>> 5
    
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_5306f0(arg1)
    
    struct sealengine::CDetectPolygon::VTable** ecx_2 = arg1[1]
    
    if (ecx_2 != 0)
        sub_530900(ecx_2, ((edx_2 u>> 0x1f) + edx_2) * 0x84 + *arg1)
        arg1[1] += 0x84
        return 

arg1[1] += 0x84
