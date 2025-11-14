// 函数: sub_62b530
// 地址: 0x62b530
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t var_4 = arg1
int32_t ebx
int32_t var_8 = ebx

if (arg1 == 0)
    return 

if (sub_627b90(arg1, 0x49444154) == 0)
    sub_633ae0(arg1)

if (*(arg1 + 0x157) == 3 && *(arg1 + 0x14c) s> zx.d(*(arg1 + 0x148)))
    sub_62a5c0(arg1, "Read palette index exceeding num_palette")

do
    uint32_t eax_3 = sub_62fb90(arg1)
    int32_t edi_1 = *(arg1 + 0x11c)
    void* ebx_2 = eax_3
    
    if (edi_1 == 0x49484452)
        sub_630550(eax_3, arg2, arg1, ebx_2)
    else if (edi_1 != 0x49454e44)
        uint32_t eax_6 = sub_627b90(arg1, edi_1)
        
        if (eax_6 != 0)
            if (edi_1 == 0x49444154 && (ebx_2 != 0 || (*(arg1 + 0x74) & 0x2000) != 0))
                sub_62a5c0(arg1, "Too many IDATs found")
            
            sub_632b10(eax_6, arg2, arg1, ebx_2, eax_6)
            
            if (edi_1 == 0x504c5445)
                *(arg1 + 0x74) |= 2
        else if (edi_1 == 0x49444154)
            if (ebx_2 != 0 || (*(arg1 + 0x74) & 0x2000) != 0)
                sub_62a5c0(arg1, "Too many IDATs found")
            
            sub_62fcc0(arg1, ebx_2)
        else if (edi_1 == 0x504c5445)
            sub_630740(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x624b4744)
            sub_6317a0(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x6348524d)
            sub_630b00(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x67414d41)
            sub_630920(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x68495354)
            sub_6319e0(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x6f464673)
            sub_631cd0(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x7043414c)
            sub_631e20(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x7343414c)
            sub_632110(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x70485973)
            sub_631b80(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x73424954)
            sub_6309c0(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x73524742)
            sub_630cb0(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x69434350)
            void* var_18_14 = ebx_2
            sub_630d90(arg1, arg2)
        else if (edi_1 == 0x73504c54)
            sub_631290(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x74455874)
            sub_632440(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x74494d45)
            sub_632310(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x74524e53)
            sub_631500(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 == 0x7a545874)
            sub_632580(eax_6, arg2, arg1, ebx_2)
        else if (edi_1 != 0x69545874)
            sub_632b10(eax_6, arg2, arg1, ebx_2, 0)
        else
            sub_632760(eax_6, arg2, arg1, ebx_2)
    else
        int32_t eax_4 = *(arg1 + 0x74)
        
        if ((eax_4.b & 1) == 0 || (eax_4.b & 4) == 0)
            sub_62a740(arg1, "out of place")
            noreturn
        
        *(arg1 + 0x74) = eax_4 | 0x18
        sub_62fcc0(arg1, ebx_2)
        
        if (ebx_2 != 0)
            sub_62a7c0(arg1, "invalid")
while ((*(arg1 + 0x74) & 0x10) == 0)
