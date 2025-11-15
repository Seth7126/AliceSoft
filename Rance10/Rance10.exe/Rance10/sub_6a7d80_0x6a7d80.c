// 函数: sub_6a7d80
// 地址: 0x6a7d80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0 || arg2 == 0)
    return 

sub_6acc70(arg1, arg2)

while (true)
    uint32_t eax_1 = sub_6acd20(arg1)
    int32_t edi_1 = *(arg1 + 0x11c)
    void* ebx_1 = eax_1
    int32_t eax_2 = *(arg1 + 0x74)
    
    if (edi_1 != 0x49444154)
        if ((eax_2.b & 4) != 0)
            eax_2 |= 8
            *(arg1 + 0x74) = eax_2
        
        if (edi_1 == 0x49484452)
            sub_6ad590(eax_2, arg2, arg1, ebx_1)
            continue
        else if (edi_1 == 0x49454e44)
            int32_t ecx_5 = *(arg1 + 0x74)
            
            if ((ecx_5.b & 5) != 5)
                sub_6a7750(arg1, "out of place")
                noreturn
            
            *(arg1 + 0x74) = ecx_5 | 0x18
            sub_6ace40(arg1, ebx_1)
            
            if (ebx_1 == 0)
                continue
            else
                sub_6a77d0(arg1, "invalid")
                continue
    else
        if ((eax_2.b & 1) == 0)
            sub_6a7750(arg1, "Missing IHDR before IDAT")
            noreturn
        
        if (*(arg1 + 0x157) == 3 && (eax_2.b & 2) == 0)
            sub_6a7750(arg1, "Missing PLTE before IDAT")
            noreturn
        
        if ((eax_2.b & 8) != 0)
            sub_6a77d0(arg1, "Too many IDATs found")
        
        *(arg1 + 0x74) |= 4
    
    uint32_t eax = sub_6a4a20(arg1, edi_1)
    
    if (eax != 0)
        sub_6b04e0(eax, arg2, arg1, ebx_1, eax)
        
        if (edi_1 != 0x504c5445)
            if (edi_1 == 0x49444154)
                *(arg1 + 0x13c) = 0
                return 
        else
            *(arg1 + 0x74) |= 2
    else if (edi_1 != 0x504c5445)
        if (edi_1 == 0x49444154)
            *(arg1 + 0x13c) = ebx_1
            break
        
        if (edi_1 == 0x624b4744)
            sub_6aee00(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x6348524d)
            sub_6adc40(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x67414d41)
            sub_6ad9b0(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x68495354)
            sub_6af080(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x6f464673)
            sub_6af380(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x7043414c)
            sub_6af4d0(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x7343414c)
            sub_6af830(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x70485973)
            sub_6af240(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x73424954)
            sub_6adad0(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x73524742)
            sub_6adfe0(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x69434350)
            void* var_14_14 = ebx_1
            sub_6ae150(arg1, arg2)
        else if (edi_1 == 0x73504c54)
            sub_6ae800(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x74455874)
            sub_6afc40(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x74494d45)
            sub_6afab0(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x74524e53)
            sub_6aeb10(eax, arg2, arg1, ebx_1)
        else if (edi_1 == 0x7a545874)
            sub_6afe20(eax, arg2, arg1, ebx_1)
        else if (edi_1 != 0x69545874)
            sub_6b04e0(eax, arg2, arg1, ebx_1, 0)
        else
            sub_6b0080(eax, arg2, arg1, ebx_1)
    else
        sub_6ad790(eax, arg2, arg1, ebx_1)
