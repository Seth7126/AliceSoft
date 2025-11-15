// 函数: sub_65cd10
// 地址: 0x65cd10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

while (true)
    if (*(arg1 + 0x194) == 0)
        char eax_2
        
        if (*(*(arg1 + 0x1ac) + 0xc) != 0)
            eax_2 = sub_65cb50(arg1)
        else
            eax_2 = sub_65cc60(arg1)
        
        if (eax_2 == 0)
            break
    
    int32_t ecx_2 = *(arg1 + 0x194)
    
    if (ecx_2 - 1 u> 0xfd)
    label_65ce4f:
        *(*arg1 + 0x14) = 0x46
    label_65ce5f:
        *(*arg1 + 0x18) = *(arg1 + 0x194)
        (**arg1)(arg1)
        *(arg1 + 0x194) = 0
    else
        uint32_t eax_4 = zx.d(*(ecx_2 + &jump_table_65cec4[0x12]:3))
        char var_c_1
        char var_8_1
        char eax_7
        char edx
        
        switch (eax_4)
            case 0
                *(*arg1 + 0x14) = 0x5e
                *(*arg1 + 0x18) = *(arg1 + 0x194)
                (*(*arg1 + 4))(arg1, 1)
                *(arg1 + 0x194) = 0
                continue
                continue
            case 1
                edx = 1
            label_65cd73:
                var_8_1 = 0
                var_c_1 = 0
                goto label_65cd79
            case 2
                edx = 0
                goto label_65cd73
            case 3
                var_8_1 = 0
                var_c_1 = 1
                edx = 0
            label_65cd79:
                eax_7 = sub_65b1b0(eax_4.b, edx, arg1, var_c_1, var_8_1)
            case 4
                *(*arg1 + 0x14) = 0x3f
                goto label_65ce5f
            case 5
                eax_7 = sub_65b9c0(arg1)
            case 6
                var_8_1 = 1
                edx = 0
                var_c_1 = 0
                goto label_65cd79
            case 7
                var_8_1 = 1
                var_c_1 = 1
                edx = 0
                goto label_65cd79
            case 8
                eax_7 = sub_65b840(arg1)
            case 9
                if (sub_65b110(arg1) == 0)
                    break
                
                *(arg1 + 0x194) = 0
                continue
                continue
            case 0xa
                *(*arg1 + 0x14) = 0x57
                (*(*arg1 + 4))(arg1, 1)
                *(arg1 + 0x194) = 0
                return 2
            case 0xb
                if (sub_65b4f0(arg1) != 0)
                    *(arg1 + 0x194) = 0
                    return 1
                
                break
                break
            case 0xc
                eax_7 = sub_65bcd0(arg1)
            case 0xd
                eax_7 = sub_65caa0(arg1)
            case 0xe
                eax_7 = sub_65c090(arg1)
            case 0xf
                eax_7 = (*(*(arg1 + 0x1ac) + (ecx_2 << 2) - 0x364))(arg1)
            case 0x10
                eax_7 = sub_65c190(arg1)
            case 0x11
                eax_7 = (*(*(arg1 + 0x1ac) + 0x18))(arg1)
            case 0x12
                goto label_65ce4f
        
        if (eax_7 == 0)
            break
        
        *(arg1 + 0x194) = 0

return 0
