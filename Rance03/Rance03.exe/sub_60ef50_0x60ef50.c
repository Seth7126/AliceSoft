// 函数: sub_60ef50
// 地址: 0x60ef50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_f8
int32_t var_14 = __security_cookie ^ &var_f8
int32_t esi
int32_t var_fc = esi
int32_t edi
int32_t var_100 = edi
int32_t* esp = &var_100
(*(*arg1 + 0xc))()
int32_t eax_4

if (arg5 - 1 u<= 3)
    int32_t var_e8_1
    
    switch (arg5)
        case 1
            var_e8_1 = 0x1c
        case 2
            var_e8_1 = 0xa
        case 3
            var_e8_1 = 0x22
        case 4
            var_e8_1 = 0x29
    
    int128_t* i_2
    int128_t* i_4
    int32_t var_ec_1
    int32_t eax_5
    int128_t* i_3
    int128_t* i_1
    
    switch (arg6)
        case 1
            i_1 = 2
        label_60efd6:
            var_ec_1 = 0
            i_4 = 1
            int128_t* i
            
            do
                void* eax_6 = arg1[2]
                int32_t var_e4
                int32_t* var_104_1 = &var_e4
                i_2 = i_1
                int32_t* eax_7 = *(eax_6 + 0x34)
                
                if ((*(*eax_7 + 0x78))(eax_7, var_e8_1, i_2, var_104_1) s>= 0)
                    eax_5 = var_e4
                    
                    if (eax_5 != 0)
                        i_3 = i_1
                        var_ec_1 = eax_5 - 1
                        goto label_60f029
                
                i = i_1
                i_1 -= 1
            while (i != 1)
            i_3 = i_1 + 1
        case 2
            i_1 = 4
            goto label_60efd6
        case 3
            i_1 = 8
            goto label_60efd6
        case 4
            i_1 = 0x10
            goto label_60efd6
        default
            i_3 = 1
            var_ec_1 = 0
        label_60f029:
            i_4 = i_3
    
    eax_5.b = i_3 != 1
    arg1[0xf].b = eax_5.b
    int32_t var_1c
    
    if (eax_5.b != 0)
        int32_t var_104_2 = 0x2c
        i_2 = nullptr
        int32_t var_40
        _memset(&var_40, i_2.b, var_104_2)
        int32_t var_3c_1 = arg3
        int32_t var_30_1 = var_e8_1
        int128_t* i_5 = i_4
        int32_t var_28_1 = var_ec_1
        void* eax_12 = arg1[2]
        var_40 = arg2
        int32_t var_38_1 = 1
        int32_t var_34_1 = 1
        int32_t var_24_1 = 0
        int32_t var_20_1 = 0x28
        var_1c = 0
        int32_t var_18_1 = 0
        int32_t* ecx_1 = *(eax_12 + 0x34)
        i_2 = nullptr
        eax_4 = (*(*ecx_1 + 0x14))(ecx_1, &var_40, i_2, &arg1[0xb])
        esp = &var_100
    
    if (eax_5.b == 0 || eax_4 s>= 0)
        int32_t var_104_4 = 0x2c
        i_2 = nullptr
        int32_t var_98
        _memset(&var_98, i_2.b, var_104_4)
        int32_t var_94_1 = arg3
        int32_t var_88_1 = var_e8_1
        void* eax_16 = arg1[2]
        var_98 = arg2
        int32_t var_90_1 = 1
        int32_t var_8c_1 = 1
        int32_t var_84_1 = 1
        int32_t var_80_1 = 0
        int32_t var_7c_1 = 0
        int32_t var_78_1 = 0x28
        int32_t var_74 = 0
        int32_t var_70_1 = 0
        int32_t* ecx_2 = *(eax_16 + 0x34)
        i_2 = nullptr
        esp = &var_100
        
        if ((*(*ecx_2 + 0x14))(ecx_2, &var_98, i_2, &arg1[3]) s>= 0)
            int128_t var_e0 = zx.o(0)
            var_e0.d = var_e8_1
            var_e0:0xc.d = var_90_1
            int64_t var_d0_1 = 0
            var_e0:8.d = 0
            var_e0:4.d = 4
            int32_t* ecx_3 = *(arg1[2] + 0x34)
            i_2 = &var_e0
            esp = &var_100
            
            if ((*(*ecx_3 + 0x1c))(ecx_3, arg1[3], i_2, &arg1[4]) s>= 0)
                bool cond:0_1 = arg1[0xf].b == 0
                int32_t* ecx_4 = *(arg1[2] + 0x34)
                void* var_104_7 = &arg1[0xc]
                i_2 = nullptr
                int32_t edx_6 = *ecx_4
                
                if (cond:0_1)
                    esp = &i_2
                    
                    if ((*(edx_6 + 0x24))(ecx_4, arg1[3]) s>= 0)
                    label_60f212:
                        _memset(&var_74, 0, 0x2c)
                        int32_t var_70_2 = arg3
                        int32_t var_60_1 = var_f8
                        int32_t var_f4
                        int32_t var_5c_1 = var_f4
                        void* eax_27 = arg1[2]
                        var_74 = arg2
                        int32_t var_6c_1 = 1
                        int32_t var_68_1 = 1
                        int32_t var_64_1 = 0x2d
                        int32_t var_58_1 = 0
                        int32_t var_54_1 = 0x40
                        int32_t var_50_1 = 0
                        int32_t var_4c_1 = 0
                        int32_t* ecx_7 = *(eax_27 + 0x34)
                        esp = &i_2
                        
                        if ((*(*ecx_7 + 0x14))(ecx_7, &var_74, 0, &arg1[0xd]) s>= 0)
                            int128_t var_c8 = zx.o(0)
                            var_c8.d = var_64_1
                            int64_t var_b8_1 = 0
                            var_c8:0xc.d = 0
                            var_c8:4.d = (sbb.d(1, 1, 1 u< var_f8) & 2) + 3
                            int32_t* ecx_8 = *(arg1[2] + 0x34)
                            esp = &i_2
                            
                            if ((*(*ecx_8 + 0x28))(ecx_8, arg1[0xd], &var_c8, &arg1[0xe]) s>= 0)
                                arg1[7] = arg4
                                arg1[5] = arg2
                                int32_t edi_3 = arg2 * arg3
                                arg1[0x10] = i_4
                                int128_t* eax_36
                                eax_36.b = arg7
                                arg1[0xa].b = eax_36.b
                                arg1[6] = arg3
                                arg1[8] = arg5
                                *(arg1 + 0x29) = 0x101
                                arg1[0x1a] = edi_3
                                int32_t eax_38
                                
                                switch (arg5)
                                    case 1, 3, 4
                                        eax_38 = edi_3 << 2
                                    case 2
                                        eax_38 = edi_3 << 3
                                
                                arg1[0x1a] = eax_38
                                
                                if (arg6 != 0)
                                    arg1[0x1a] <<= 2
                                
                                eax_38.b = 1
                                sub_69a5bc(var_1c ^ &var_100)
                                return eax_38
                else
                    esp = &i_2
                    
                    if ((*(edx_6 + 0x24))(ecx_4, arg1[0xb]) s>= 0)
                        goto label_60f212

eax_4.b = 0
*esp
esp[1]
sub_69a5bc(esp[0x3b] ^ &esp[2])
return eax_4
