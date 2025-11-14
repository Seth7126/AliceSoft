// 函数: sub_46efc0
// 地址: 0x46efc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = arg2
int32_t* edi = nullptr
EnterCriticalSection(*(arg1 + 0x18) + 4)
int32_t* var_4
sub_42f3d0(arg1 + 0xc, &var_4, &var_8)
int32_t* eax_3 = var_4

if (eax_3 != *(arg1 + 0xc))
    edi = eax_3[5]

LeaveCriticalSection(*(arg1 + 0x18) + 4)

if (edi != 0)
    EnterCriticalSection(*(arg1 + 0x18) + 4)
    sub_420180(arg1 + 0xc, &arg2, *sub_42f3d0(arg1 + 0xc, &var_4, &arg2))
    LeaveCriticalSection(*(arg1 + 0x18) + 4)
    void* ecx_3 = *(arg1 + 4)
    
    if (ecx_3 != 0)
        return sub_4731a0(ecx_3, edi)

int32_t result
result.b = 0
return result
