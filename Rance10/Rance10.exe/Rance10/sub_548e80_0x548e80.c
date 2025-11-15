// 函数: sub_548e80
// 地址: 0x548e80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg2
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x51eb851f, *(arg1 + 0x80) - *(arg1 + 0x7c))
int32_t edx_3 = edx_2 s>> 6
sub_6ca100(edi, (edx_3 u>> 0x1f) + edx_3)
int32_t esi = 0
int32_t eax_4
int32_t edx_4
edx_4:eax_4 = muls.dp.d(0x51eb851f, *(arg1 + 0x80) - *(arg1 + 0x7c))
int32_t var_8 = 0
int32_t edx_5 = edx_4 s>> 6
void* eax_7 = (edx_5 u>> 0x1f) + edx_5
void* var_4 = eax_7

if (eax_7 s> 0)
    int32_t ebx_1 = 0
    
    while (true)
        if (ebx_1 s>= 0)
            int32_t eax_8
            int32_t edx_6
            edx_6:eax_8 = muls.dp.d(0x51eb851f, *(arg1 + 0x80) - *(arg1 + 0x7c))
            int32_t edx_7 = edx_6 s>> 6
            
            if ((edx_7 u>> 0x1f) + edx_7 s> esi)
                void* esi_1 = *(arg1 + 0x7c)
                void* esi_2 = esi_1 + ebx_1
                
                if (esi_1 != neg.d(ebx_1))
                    sub_6ca100(edi, *(esi_2 + 4))
                    int32_t var_1c_57
                    
                    switch (*(esi_2 + 4))
                        case nullptr, 1
                            sub_6ca100(edi, *(esi_2 + 0x2c))
                            sub_6ca100(edi, *(esi_2 + 0x30))
                        case 2
                            sub_6ca1a0(edi, esi_2 + 0xac)
                        case 3, 0xa
                            sub_6ca100(edi, *(esi_2 + 0x1c))
                            sub_6ca100(edi, *(esi_2 + 0x20))
                            sub_6ca100(edi, *(esi_2 + 0x2c))
                            sub_6ca100(edi, *(esi_2 + 0x30))
                            sub_6ca100(edi, *(esi_2 + 0x34))
                            sub_6ca100(edi, *(esi_2 + 0x38))
                            sub_6ca100(edi, *(esi_2 + 0x3c))
                        case 4, 6
                            sub_6ca100(edi, *(esi_2 + 0x1c))
                            sub_6ca100(edi, *(esi_2 + 0x20))
                            sub_6ca100(edi, *(esi_2 + 0x2c))
                            sub_6ca100(edi, *(esi_2 + 0x30))
                            sub_6ca100(edi, *(esi_2 + 0x34))
                            sub_6ca100(edi, *(esi_2 + 0x38))
                            sub_6ca100(edi, *(esi_2 + 0x3c))
                            sub_6ca100(edi, *(esi_2 + 0x40))
                        case 5
                            sub_6ca100(edi, *(esi_2 + 0x1c))
                            sub_6ca100(edi, *(esi_2 + 0x20))
                            sub_6ca100(edi, *(esi_2 + 0x2c))
                            sub_6ca100(edi, *(esi_2 + 0x30))
                            sub_6ca100(edi, *(esi_2 + 0x40))
                        case 7, 8, 0x17, 0x18
                            sub_6ca100(edi, *(esi_2 + 0x1c))
                            sub_6ca100(edi, *(esi_2 + 0x20))
                            sub_6ca1a0(edi, esi_2 + 0x94)
                            sub_6ca100(edi, *(esi_2 + 0x64))
                            sub_6ca100(edi, *(esi_2 + 0x68))
                            sub_6ca100(edi, *(esi_2 + 0x6c))
                            sub_6ca100(edi, *(esi_2 + 0x70))
                            sub_6ca100(edi, *(esi_2 + 0x74))
                            arg2 = *(esi_2 + 0x7c)
                            sub_6ca100(edi, arg2)
                            sub_6ca100(edi, *(esi_2 + 0x84))
                            sub_6ca100(edi, *(esi_2 + 0x88))
                            sub_6ca100(edi, *(esi_2 + 0x8c))
                            arg2 = *(esi_2 + 0x80)
                            sub_6ca100(edi, arg2)
                            sub_6ca100(edi, *(esi_2 + 0x58))
                            sub_6ca100(edi, *(esi_2 + 0x5c))
                        case 9
                            sub_6ca100(edi, *(esi_2 + 0x1c))
                            sub_6ca100(edi, *(esi_2 + 0x20))
                            sub_6ca100(edi, *(esi_2 + 0x2c))
                            sub_6ca100(edi, *(esi_2 + 0x30))
                            sub_6ca100(edi, *(esi_2 + 0x34))
                            sub_6ca100(edi, *(esi_2 + 0x38))
                            sub_6ca100(edi, *(esi_2 + 0x3c))
                            sub_6ca100(edi, *(esi_2 + 0x44))
                            sub_6ca100(edi, *(esi_2 + 0x48))
                            sub_6ca100(edi, *(esi_2 + 0x4c))
                        case 0xb, 0xc, 0xd, 0xe, 0x13, 0x14, 0x15, 0x16
                            sub_6ca1a0(edi, esi_2 + 0xac)
                            sub_6ca100(edi, *(esi_2 + 0xc))
                            sub_6ca100(edi, *(esi_2 + 0x10))
                            sub_6ca100(edi, *(esi_2 + 0x14))
                            sub_6ca100(edi, *(esi_2 + 0x18))
                            sub_6ca100(edi, *(esi_2 + 0x1c))
                            sub_6ca100(edi, *(esi_2 + 0x20))
                            sub_6ca100(edi, *(esi_2 + 0x2c))
                            sub_6ca100(edi, *(esi_2 + 0x30))
                            sub_6ca100(edi, *(esi_2 + 8))
                        case 0xf
                            sub_6ca100(edi, *(esi_2 + 0x1c))
                            sub_6ca100(edi, *(esi_2 + 0x20))
                            sub_6ca100(edi, *(esi_2 + 0x2c))
                            var_1c_57 = *(esi_2 + 0x30)
                        label_5491c7:
                            sub_6ca100(edi, var_1c_57)
                            arg2.b = *(esi_2 + 0xc4) != 0
                            sub_4263a0(edi + 4, &arg2)
                        case 0x10, 0x11
                            sub_6ca100(edi, *(esi_2 + 0x1c))
                            sub_6ca100(edi, *(esi_2 + 0x20))
                            sub_6ca100(edi, *(esi_2 + 0x2c))
                            sub_6ca100(edi, *(esi_2 + 0x30))
                            sub_6ca100(edi, *(esi_2 + 0x34))
                            sub_6ca100(edi, *(esi_2 + 0x38))
                            var_1c_57 = *(esi_2 + 0x3c)
                            goto label_5491c7
                        case 0x12
                            sub_6ca100(edi, *(esi_2 + 0x1c))
                            sub_6ca100(edi, *(esi_2 + 0x20))
                            sub_6ca100(edi, *(esi_2 + 0x24))
                            sub_6ca100(edi, *(esi_2 + 0x28))
                            sub_6ca100(edi, *(esi_2 + 0x34))
                            sub_6ca100(edi, *(esi_2 + 0x38))
                            sub_6ca100(edi, *(esi_2 + 0x3c))
                            sub_6ca100(edi, *(esi_2 + 0x40))
                        case 0x19, 0x1a
                            sub_6ca100(edi, *(esi_2 + 0x1c))
                            sub_6ca100(edi, *(esi_2 + 0x20))
                            sub_6ca100(edi, *(esi_2 + 0x2c))
                            sub_6ca100(edi, *(esi_2 + 0x30))
                            sub_6ca100(edi, *(esi_2 + 0x40))
                            sub_6ca100(edi, *(esi_2 + 0x50))
                        case 0x1b, 0x1c
                            sub_6ca100(edi, *(esi_2 + 0x1c))
                            sub_6ca100(edi, *(esi_2 + 0x20))
                            sub_6ca100(edi, *(esi_2 + 0x2c))
                            sub_6ca100(edi, *(esi_2 + 0x30))
                            var_1c_57 = *(esi_2 + 0x54)
                            goto label_5491c7
                        case 0x1d
                            sub_6ca1a0(edi, esi_2 + 0xac)
                            sub_6ca100(edi, *(esi_2 + 0x1c))
                            sub_6ca100(edi, *(esi_2 + 0x20))
                    
                    ebx_1 += 0xc8
                    esi = var_8 + 1
                    var_8 = esi
                    
                    if (esi s>= var_4)
                        break
                    
                    continue
        
        eax_7.b = 0
        return eax_7

sub_6ca100(edi, *(arg1 + 0x90))
sub_6ca100(edi, *(arg1 + 0x94))
sub_6ca100(edi, *(arg1 + 0x9c))
sub_6ca100(edi, *(arg1 + 0xa0))
void* eax_16
eax_16.b = 1
return eax_16
