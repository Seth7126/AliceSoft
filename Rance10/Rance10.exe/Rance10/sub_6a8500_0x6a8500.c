// 函数: sub_6a8500
// 地址: 0x6a8500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4 = arg1

if (arg1 == 0)
    return 

if (sub_6a4a20(arg1, 0x49444154) == 0)
    sub_6b1430(arg1)

if (*(arg1 + 0x157) == 3 && *(arg1 + 0x14c) s> zx.d(*(arg1 + 0x148)))
    sub_6a75b0(arg1, "Read palette index exceeding num_palette")

do
    uint32_t eax_3 = sub_6acd20(arg1)
    int32_t edi_1 = *(arg1 + 0x11c)
    void* ebx_1 = eax_3
    
    if (edi_1 == 0x49484452)
        sub_6ad590(eax_3, arg2, arg1, ebx_1)
    else if (edi_1 != 0x49454e44)
        uint32_t eax_6 = sub_6a4a20(arg1, edi_1)
        
        if (eax_6 != 0)
            if (edi_1 == 0x49444154 && (ebx_1 != 0 || (*(arg1 + 0x74) & 0x2000) != 0))
                sub_6a75b0(arg1, "Too many IDATs found")
            
            sub_6b04e0(eax_6, arg2, arg1, ebx_1, eax_6)
            
            if (edi_1 == 0x504c5445)
                *(arg1 + 0x74) |= 2
        else if (edi_1 == 0x49444154)
            if (ebx_1 != 0 || (*(arg1 + 0x74) & 0x2000) != 0)
                sub_6a75b0(arg1, "Too many IDATs found")
            
            sub_6ace40(arg1, ebx_1)
        else if (edi_1 == 0x504c5445)
            sub_6ad790(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x624b4744)
            sub_6aee00(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x6348524d)
            sub_6adc40(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x67414d41)
            sub_6ad9b0(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x68495354)
            sub_6af080(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x6f464673)
            sub_6af380(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x7043414c)
            sub_6af4d0(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x7343414c)
            sub_6af830(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x70485973)
            sub_6af240(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x73424954)
            sub_6adad0(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x73524742)
            sub_6adfe0(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x69434350)
            void* var_18_14 = ebx_1
            sub_6ae150(arg1, arg2)
        else if (edi_1 == 0x73504c54)
            sub_6ae800(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x74455874)
            sub_6afc40(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x74494d45)
            sub_6afab0(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x74524e53)
            sub_6aeb10(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 == 0x7a545874)
            sub_6afe20(eax_6, arg2, arg1, ebx_1)
        else if (edi_1 != 0x69545874)
            sub_6b04e0(eax_6, arg2, arg1, ebx_1, 0)
        else
            sub_6b0080(eax_6, arg2, arg1, ebx_1)
    else
        int32_t ecx_4 = *(arg1 + 0x74)
        
        if ((ecx_4.b & 5) != 5)
            sub_6a7750(arg1, "out of place")
            noreturn
        
        *(arg1 + 0x74) = ecx_4 | 0x18
        sub_6ace40(arg1, ebx_1)
        
        if (ebx_1 != 0)
            sub_6a77d0(arg1, "invalid")
while ((*(arg1 + 0x74) & 0x10) == 0)
