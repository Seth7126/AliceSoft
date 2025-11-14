// 函数: sub_62ad80
// 地址: 0x62ad80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_ec
int32_t eax_1 = __security_cookie ^ &var_ec
int32_t ebx
int32_t var_f0 = ebx
uint32_t eax_2 = arg2
var_ec = eax_2

if (arg1 != 0 && eax_2 != 0)
    sub_62fae0(arg1, arg2)
    
    while (true)
        uint32_t eax_3 = sub_62fb90(arg1)
        int32_t edi_1 = *(arg1 + 0x11c)
        void* ebx_2 = eax_3
        int32_t eax_4 = *(arg1 + 0x74)
        
        if (edi_1 != 0x49444154)
            if ((eax_4.b & 4) != 0)
                eax_4 |= 8
                *(arg1 + 0x74) = eax_4
            
            if (edi_1 == 0x49484452)
                sub_630550(eax_4, var_ec, arg1, ebx_2)
                continue
            else if (edi_1 == 0x49454e44)
                int32_t eax_6 = *(arg1 + 0x74)
                
                if ((eax_6.b & 1) == 0 || (eax_6.b & 4) == 0)
                    sub_62a740(arg1, "out of place")
                    noreturn
                
                *(arg1 + 0x74) = eax_6 | 0x18
                sub_62fcc0(arg1, ebx_2)
                
                if (ebx_2 == 0)
                    continue
                else
                    sub_62a7c0(arg1, "invalid")
                    continue
        else
            if ((eax_4.b & 1) == 0)
                sub_62a740(arg1, "Missing IHDR before IDAT")
                noreturn
            
            if (arg1[0x157] == 3 && (eax_4.b & 2) == 0)
                sub_62a740(arg1, "Missing PLTE before IDAT")
                noreturn
            
            if ((eax_4.b & 8) != 0)
                if ((*(arg1 + 0x78) & 0x100000) == 0)
                    sub_62a740(arg1, "Too many IDATs found")
                    noreturn
                
                char var_e8[0xdc]
                sub_62a640(eax_4, &var_e8, arg1, "Too many IDATs found")
                sub_62a550(arg1, &var_e8)
            
            *(arg1 + 0x74) |= 4
        
        eax_2 = sub_627b90(arg1, edi_1)
        
        if (eax_2 != 0)
            int32_t eax_5 = sub_632b10(eax_2, var_ec, arg1, ebx_2, eax_2)
            
            if (edi_1 != 0x504c5445)
                if (edi_1 == 0x49444154)
                    *(arg1 + 0x13c) = 0
                    sub_69a5bc(eax_1 ^ &var_ec)
                    return eax_5
            else
                *(arg1 + 0x74) |= 2
        else if (edi_1 != 0x504c5445)
            if (edi_1 == 0x49444154)
                *(arg1 + 0x13c) = ebx_2
                break
            
            int32_t* edx_7 = var_ec
            
            if (edi_1 == 0x624b4744)
                sub_6317a0(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x6348524d)
                sub_630b00(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x67414d41)
                sub_630920(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x68495354)
                sub_6319e0(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x6f464673)
                sub_631cd0(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x7043414c)
                sub_631e20(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x7343414c)
                sub_632110(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x70485973)
                sub_631b80(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x73424954)
                sub_6309c0(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x73524742)
                sub_630cb0(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x69434350)
                void* var_fc_14 = ebx_2
                sub_630d90(arg1, edx_7)
            else if (edi_1 == 0x73504c54)
                sub_631290(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x74455874)
                sub_632440(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x74494d45)
                sub_632310(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x74524e53)
                sub_631500(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 == 0x7a545874)
                sub_632580(eax_2, edx_7, arg1, ebx_2)
            else if (edi_1 != 0x69545874)
                sub_632b10(eax_2, edx_7, arg1, ebx_2, 0)
            else
                sub_632760(eax_2, edx_7, arg1, ebx_2)
        else
            sub_630740(eax_2, var_ec, arg1, ebx_2)

sub_69a5bc(eax_1 ^ &var_ec)
return eax_2
