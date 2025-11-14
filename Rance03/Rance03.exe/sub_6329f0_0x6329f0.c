// 函数: sub_6329f0
// 地址: 0x6329f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = 0xffffffff
int32_t eax = *(arg1 + 0x2a8)

if (eax != 0)
    int32_t ecx = *(arg1 + 0x278)
    
    if (ecx == 0)
        _free(eax)
    else
        ecx(arg1, eax)
    
    *(arg1 + 0x2a8) = 0

int32_t eax_1 = *(arg1 + 0x29c)

if (eax_1 != 0 && eax_1 u< 0xffffffff)
    ebx = eax_1

if (arg2 u<= ebx)
    *(arg1 + 0x2a0) = *(arg1 + 0x11f)
    *(arg1 + 0x2a1) = *(arg1 + 0x11e)
    *(arg1 + 0x2a2) = (*(arg1 + 0x11c) u>> 8).b
    *(arg1 + 0x2a3) = *(arg1 + 0x11c)
    *(arg1 + 0x2a4) = 0
    char eax_7 = *(arg1 + 0x74)
    *(arg1 + 0x2ac) = arg2
    *(arg1 + 0x2b0) = eax_7
    
    if (arg2 != 0)
        *(arg1 + 0x2a8) = sub_62aca0(arg1, arg2)
    else
        *(arg1 + 0x2a8) = arg2

void* ebx_1 = *(arg1 + 0x2a8)

if (ebx_1 != 0)
    if (arg2 != 0)
        int32_t eax_10 = *(arg1 + 0x5c)
        
        if (eax_10 == 0)
            sub_62a520(arg1, "Call to NULL read function")
            noreturn
        
        sub_627190(eax_10(arg1, ebx_1, arg2), ebx_1, arg1, arg2)
else if (arg2 != 0)
    sub_62fcc0(arg1, arg2)
    sub_62a7c0(arg1, "unknown chunk exceeds memory limits")
    return 0

sub_62fcc0(arg1, nullptr)
return 1
