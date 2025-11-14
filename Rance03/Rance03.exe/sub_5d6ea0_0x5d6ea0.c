// 函数: sub_5d6ea0
// 地址: 0x5d6ea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
uint32_t eax_2 = *(arg5 + 0x18)
var_1c = arg4

switch (eax_2)
    case 0, 0xa, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1f, 0x20, 0x2f, 0x33, 
            0x34, 0x43, 0x44
        if (arg3 u< *(arg2 + 0xc) u>> 2)
            if (*(arg2 + 0xc) != 0)
                *(*(arg2 + 8) + (arg3 << 2)) = arg4
                int32_t eax_5
                eax_5.b = 1
                sub_69a5bc(eax_1 ^ &var_1c)
                return eax_5
            
            *(arg3 << 2) = arg4
            int32_t eax_4
            eax_4.b = 1
            sub_69a5bc(eax_1 ^ &var_1c)
            return 1
    case 0xb
        eax_2 = sub_5d34e0(arg2, var_1c, arg3)
    label_5d6f38:
        
        if (eax_2.b != 0)
        label_5d70ef:
            eax_2.b = 1
            sub_69a5bc(eax_1 ^ &var_1c)
            return eax_2
    case 0xc
        if (sub_5d3550(arg2, arg3, &var_1c).b != 0)
            void* eax_6 = sub_5d6060(arg1, var_1c)
            eax_2 = sub_5d6060(arg1, arg4)
            
            if (eax_6 != 0 && eax_2 != 0)
                eax_2 = sub_5d3d90(eax_6, eax_2)
                goto label_5d6f38
    case 0xd
        if (sub_5d3550(arg2, arg3, &var_1c).b != 0)
            void* eax_11 = sub_5d6060(arg1, arg4)
            uint32_t edi_2 = sub_5d6060(arg1, var_1c)
            
            if (eax_11 != 0 && edi_2 != 0 && sub_5d6df0(arg1, edi_2, eax_11).b != 0)
                sub_5d6140(arg1, edi_2)
                uint32_t eax_12
                eax_12.b = 1
                sub_69a5bc(eax_1 ^ &var_1c)
                return eax_12
    case 0xe, 0xf, 0x10, 0x11, 0x1e, 0x32, 0x42
        if (arg4 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
            uint32_t ebx_1 = *(*(arg1 + 8) + (arg4 << 2))
            
            if (ebx_1 != 0)
                eax_2 = sub_5d3550(arg2, arg3, &var_1c)
                
                if (eax_2.b != 0)
                    uint32_t esi_1 = sub_5d6060(arg1, var_1c)
                    
                    if (esi_1 != 0)
                        if (*(esi_1 + 0x48) != 0)
                            eax_2 = sub_5d4a90(esi_1)
                        
                        if (*(esi_1 + 0x48) == 0 || eax_2.b != 0)
                            if (*(ebx_1 + 0x48) == 0)
                                goto label_5d70ef
                            
                            void var_18
                            
                            if (sub_5d46f0(ebx_1, &var_18).b != 0)
                                *(esi_1 + 0x3c) = *(arg5 + 0x18)
                                *(esi_1 + 0x40) = *(arg5 + 0x1c)
                                
                                if (sub_5d4340(esi_1, *(ebx_1 + 0x44), &var_18, 0).b != 0)
                                    eax_2 = sub_5d4760(esi_1, ebx_1)
                                    goto label_5d6f38
    case 0x3f
        uint32_t ebx_3 = sub_5d6060(arg1, arg4)
        
        if (ebx_3 != 0 && sub_5d3550(arg2, arg3, &var_1c).b != 0)
            eax_2 = sub_5d6060(arg1, var_1c)
            
            if (eax_2 != 0 && sub_5d53d0(eax_2, ebx_3).b != 0)
                goto label_5d70ef

eax_2.b = 0
sub_69a5bc(eax_1 ^ &var_1c)
return eax_2
