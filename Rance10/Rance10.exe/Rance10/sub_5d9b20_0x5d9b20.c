// 函数: sub_5d9b20
// 地址: 0x5d9b20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741538
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_98 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg2
char* edx = *(edi + 4)

if (&edx[4] u> *(edi + 8))
label_5d9e4b:
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

void* var_9c_1 = arg2
uint32_t ebx_5 = (zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])
uint32_t eax_6 = zx.d(*edx)
*(edi + 4) = &edx[4]
uint32_t ebx_7 = ebx_5 << 8 | eax_6
void* var_a0_1 = arg1
uint32_t var_3c_1 = ebx_7
sub_56b630(*(arg1 + 0x1c), *(arg1 + 0x20))
*(arg1 + 0x20) = *(arg1 + 0x1c)
int32_t var_24_1 = 0

if (ebx_7 s> 0)
    ebx_7.b = arg2:3.b
    int32_t ecx_23
    
    do
        int64_t xmm0_1 = data_7fd4d8.q
        int32_t eax_8 = data_7fd4e0
        int64_t var_80_1 = xmm0_1
        int64_t var_74_1 = xmm0_1
        int128_t xmm0_2 = data_79a7b0
        uint32_t var_84 = 0
        int32_t var_78_1 = eax_8
        int32_t var_6c_1 = eax_8
        int32_t var_68_1 = 0
        int128_t var_64 = xmm0_2
        int32_t var_8_1 = 0
        
        if (*(edi + 4) + 4 u> *(edi + 8))
            goto label_5d9e4b
        
        char* ecx_1 = *(edi + 4)
        int32_t var_48_1 = 0
        int32_t var_44_1 = 0
        uint32_t var_40 = 0
        uint32_t esi_8 =
            ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
        *(edi + 4) = &ecx_1[4]
        
        if (&ecx_1[8] u> *(edi + 8))
            goto label_5d9e4b
        
        uint32_t ecx_8 =
            ((zx.d(ecx_1[7]) << 8 | zx.d(ecx_1[6])) << 8 | zx.d(ecx_1[5])) << 8 | zx.d(ecx_1[4])
        *(edi + 4) = &ecx_1[8]
        
        if (&ecx_1[0xc] u> *(edi + 8))
            goto label_5d9e4b
        
        char* ecx_9 = *(edi + 4)
        uint32_t edx_9 =
            ((zx.d(ecx_9[3]) << 8 | zx.d(ecx_9[2])) << 8 | zx.d(ecx_9[1])) << 8 | zx.d(*ecx_9)
        *(edi + 4) = &ecx_9[4]
        uint32_t var_44_2 = edx_9
        
        if (sub_6c9300(edi, &var_40).b == 0)
            goto label_5d9e4b
        
        uint32_t var_54 = 0
        uint32_t var_50 = 0
        uint32_t var_4c = 0
        
        if (sub_6c9300(edi, &var_54).b == 0)
            goto label_5d9e4b
        
        if (sub_6c9300(edi, &var_50).b == 0)
            goto label_5d9e4b
        
        if (sub_6c9300(edi, &var_4c).b == 0)
            goto label_5d9e4b
        
        uint32_t var_28
        
        if (sub_6c9300(edi, &var_28).b == 0)
            goto label_5d9e4b
        
        uint32_t var_78_2 = var_40
        int64_t var_80_2 = ecx_8.q
        uint32_t var_6c_2 = var_4c
        int64_t var_74_2 = var_54.q
        uint32_t xmm0_5 = var_28
        var_84 = esi_8
        uint32_t var_68_2 = xmm0_5
        uint32_t var_2c
        
        if (sub_61ec90(edi, &var_2c).b == 0)
            goto label_5d9e4b
        
        var_64.d = var_2c
        uint32_t var_20
        
        if (sub_61ec90(edi, &var_20).b == 0)
            goto label_5d9e4b
        
        int32_t var_1c_1 = 0
        
        if (var_20 s> 0)
            int32_t* esi_9 = var_64:8.d
            void* edi_1 = var_64:4.d
            
            while (true)
                uint32_t i_2
                
                if (sub_61ec90(arg2, &i_2).b == 0)
                    if (edi_1 != 0)
                        sub_403160(edi_1, (var_64:0xc.d - edi_1) s>> 2, 4)
                    
                    break
                
                uint32_t i = i_2
                int32_t* eax_24 = edi_1
                uint32_t i_1 = i
                
                if (edi_1 != esi_9)
                    while (*eax_24 != i)
                        eax_24 = &eax_24[1]
                        
                        if (eax_24 == esi_9)
                            goto label_5d9dbd
                
                if (edi_1 == esi_9 || eax_24 == esi_9)
                label_5d9dbd:
                    sub_404370(&var_64:4, &i_1)
                    esi_9 = var_64:8.d
                    edi_1 = var_64:4.d
                    char var_18 = ebx_7.b
                    int32_t eax_27 = (esi_9 - edi_1) s>> 2
                    sub_56adc0(eax_27, esi_9, edi_1, eax_27, &var_18)
                
                int32_t eax_29 = var_1c_1 + 1
                var_1c_1 = eax_29
                
                if (eax_29 s>= var_20)
                    edi = arg2
                    goto label_5d9df9
            
            goto label_5d9e4b
        
    label_5d9df9:
        sub_56b360(arg1 + 0x1c, &var_84)
        int32_t var_8_2 = 0xffffffff
        sub_56b730(&var_84)
        ecx_23 = var_24_1 + 1
        var_24_1 = ecx_23
    while (ecx_23 s< var_3c_1)

int32_t eax_7
eax_7.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
