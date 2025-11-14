// 函数: sub_403110
// 地址: 0x403110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** edi = arg2
int32_t eax = edi[4]

if (eax u< arg3)
    sub_69a57f("invalid string position")
    noreturn

void* eax_1 = eax - arg3
void* ecx_1 = arg1[4]
void* ebx = arg4

if (eax_1 u< ebx)
    ebx = eax_1

if (0xffffffff - ecx_1 u<= ebx)
    sub_69a551("string too long")
    noreturn

if (ebx != 0)
    char* ebp_1 = ecx_1 + ebx
    
    if (sub_4022d0(arg1, ebp_1, 0) != 0)
        if (edi[5] u>= 0x10)
            edi = *edi
        
        int32_t* ecx_3
        
        if (arg1[5] u< 0x10)
            ecx_3 = arg1
        else
            ecx_3 = *arg1
        
        if (ebx != 0)
            sub_69d850(arg1[4] + ecx_3, arg3 + edi, ebx)
        
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = ebp_1
        
        if (not(cond:0_1))
            *(*arg1 + ebp_1) = 0
            return arg1
        
        *(arg1 + ebp_1) = 0

return arg1
