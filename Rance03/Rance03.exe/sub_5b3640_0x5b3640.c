// 函数: sub_5b3640
// 地址: 0x5b3640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1
void* edi = arg2
int32_t result = esi[1]

if (edi u< result)
    arg1 = *esi

if (edi u< result && arg1 u<= edi)
    if (result == esi[2])
        int32_t* var_c_1 = arg1
        result = sub_5b36d0(esi)
    
    edi = ((edi - arg1) & 0xfffffff0) + *esi
else if (result == esi[2])
    int32_t* var_c_2 = arg1
    result = sub_5b36d0(esi)

struct win32only::CHighResolutionTimer::VTable** ecx_2 = esi[1]

if (ecx_2 != 0)
    *ecx_2 = &win32only::CHighResolutionTimer::`vftable'
    ecx_2[2] = *(edi + 8)
    result = *(edi + 0xc)
    ecx_2[3] = result

esi[1] += 0x10
return result
