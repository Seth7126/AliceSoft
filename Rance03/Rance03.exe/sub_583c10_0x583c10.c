// 函数: sub_583c10
// 地址: 0x583c10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
sub_583d40(arg1)
int32_t* eax_1
int32_t ecx_1
int32_t edx
eax_1, ecx_1, edx = sub_548900(arg1 + 0x18, arg3, arg5)

if (eax_1.b == 0)
    sub_59f4e0(eax_1, edx, ecx_1, 0x6e55d4, arg2)
    enum MESSAGEBOX_RESULT eax_2
    eax_2.b = 0
    return eax_2

int32_t eax_4
int32_t ecx_3
int32_t edx_1
eax_4, ecx_3, edx_1 = sub_549b30(arg1 + 0x24, arg3, arg1 + 0x18, 0, arg4)

if (eax_4.b == 0)
    sub_59f4e0(eax_4, edx_1, ecx_3, 0x6e55b0, arg2)
    enum MESSAGEBOX_RESULT eax_5
    eax_5.b = 0
    return eax_5

int32_t* eax_6 = *(arg1 + 0x28)
int32_t edx_2 = *(arg1 + 0x2c)

if (eax_6 == edx_2)
label_583c95:
    eax_6.b = 0
else
    while (*(*eax_6 + 0x20) == 0)
        eax_6 = &eax_6[1]
        
        if (eax_6 == edx_2)
            goto label_583c95
    
    eax_6.b = 1

*(arg1 + 0x154) = eax_6.b
*(arg1 + 0x155) = sub_548a30(arg1 + 0x18)
int32_t* eax_8 = *(arg1 + 0x28)
int32_t edx_3 = *(arg1 + 0x2c)

if (eax_8 == edx_3)
label_583cc4:
    eax_8.b = 0
else
    while (*(*eax_8 + 0x22) == 0)
        eax_8 = &eax_8[1]
        
        if (eax_8 == edx_3)
            goto label_583cc4
    
    eax_8.b = 1

*(arg1 + 0x156) = eax_8.b
sub_54a100(arg1 + 0x24, arg3)
*(arg1 + 0x14) = arg3
EnterCriticalSection(arg3[3] + 4)
arg3[1] += 1
LeaveCriticalSection(arg3[3] + 4)
int32_t eax_13
eax_13.b = 1
return eax_13
