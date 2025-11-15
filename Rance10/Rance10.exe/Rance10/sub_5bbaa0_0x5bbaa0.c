// 函数: sub_5bbaa0
// 地址: 0x5bbaa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73fa71
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_50 = edi
int32_t* result = arg2
int32_t var_64 = 0
int32_t* result_2 = result
int32_t* result_1 = result
result[4] = 0
result[5] = 0
result[5] = 0xf
bool cond:0 = result[5] u< 0x10
result[4] = 0
char* result_3

if (cond:0)
    result_3 = result
else
    result_3 = *result

*result_3 = 0
int32_t var_8_1 = 0
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x38e38e39, *(edi + 0x70) - *(edi + 0x6c))
int32_t edx_1 = edx s>> 3
int32_t var_64_1 = 1
int32_t var_1c = 0xf
int32_t var_4c = (edx_1 u>> 0x1f) + edx_1
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, 0x769f74, 0xc)
int32_t var_8_2 = 1
var_8_2.b = 2
char var_48
sub_4055a0(result, sub_409350(&var_4c, &var_30, &var_48, &var_4c), 0, 0xffffffff)
int32_t var_34

if (var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

var_8_2.b = 0
int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t eax_13
int32_t edx_3
edx_3:eax_13 = muls.dp.d(0x2aaaaaab, *(edi + 0x7c) - *(edi + 0x78))
int32_t edx_4 = edx_3 s>> 2
int32_t var_1c_1 = 0xf
int32_t var_20_1 = 0
var_4c = (edx_4 u>> 0x1f) + edx_4
var_30 = 0
sub_403490(&var_30, 0x769fd8, 0xc)
int32_t var_8_3 = 3
var_8_3.b = 4
sub_4055a0(result, sub_409350(&var_4c, &var_30, &var_48, &var_4c), 0, 0xffffffff)

if (var_34_1 u>= 0x10)
    sub_403160(var_48.d, var_34_1 + 1, 1)

var_8_3.b = 0
int32_t var_34_2 = 0xf
int32_t var_38_1 = 0
var_48 = 0

if (var_1c_1 u>= 0x10)
    sub_403160(var_30.d, var_1c_1 + 1, 1)

int32_t ecx_11 = *(edi + 0x58) - *(edi + 0x54)
int32_t var_1c_2 = 0xf
int32_t var_20_2 = 0
var_30 = 0
var_4c = ecx_11 s/ 0x3c
sub_403490(&var_30, 0x769fc8, 0xe)
int32_t var_8_4 = 5
var_8_4.b = 6
sub_4055a0(result, sub_409350(&var_4c, &var_30, &var_48, &var_4c), 0, 0xffffffff)

if (var_34_2 u>= 0x10)
    sub_403160(var_48.d, var_34_2 + 1, 1)

var_8_4.b = 0
int32_t var_34_3 = 0xf
int32_t var_38_2 = 0
var_48 = 0

if (var_1c_2 u>= 0x10)
    sub_403160(var_30.d, var_1c_2 + 1, 1)

sub_407430(result, U"\n", 1)
var_4c = (*(edi + 0x64) - *(edi + 0x60)) s>> 2
int32_t var_1c_3 = 0xf
int32_t var_20_3 = 0
var_30 = 0
sub_403490(&var_30, 0x769fac, 0x14)
int32_t var_8_5 = 7
var_8_5.b = 8
sub_4055a0(result, sub_409350(&var_4c, &var_30, &var_48, &var_4c), 0, 0xffffffff)

if (var_34_3 u>= 0x10)
    sub_403160(var_48.d, var_34_3 + 1, 1)

var_8_5.b = 0
int32_t var_34_4 = 0xf
int32_t var_38_3 = 0
var_48 = 0

if (var_1c_3 u>= 0x10)
    sub_403160(var_30.d, var_1c_3 + 1, 1)

int32_t esi = *(edi + 0x60)
var_4c = esi

if (esi != *(edi + 0x64))
    while (true)
        int32_t var_1c_4 = 0xf
        int32_t var_68 = (esi - *(edi + 0x60)) s>> 2
        int32_t var_20_4 = 0
        var_30 = 0
        sub_403490(&var_30, "[%3d]", 5)
        int32_t var_8_6 = 9
        var_8_6.b = 0xa
        sub_4055a0(result, sub_409350(&var_68, &var_30, &var_48, &var_68), 0, 0xffffffff)
        
        if (var_34_4 u>= 0x10)
            sub_403160(var_48.d, var_34_4 + 1, 1)
        
        var_8_6.b = 0
        var_34_4 = 0xf
        int32_t var_38_4 = 0
        var_48 = 0
        
        if (var_1c_4 u>= 0x10)
            sub_403160(var_30.d, var_1c_4 + 1, 1)
        
        if (*esi != 0)
            int32_t* var_5c = nullptr
            int32_t var_58_1 = 0
            var_5c = sub_4f2cd0()
            int32_t var_8_7 = 0xb
            void* ebx = *esi
            int32_t eax_52 = *(ebx + 0x28)
            int32_t* ebx_1 = *(ebx + 0x24)
            
            if (ebx_1 != eax_52)
                do
                    int32_t i_1 = 3
                    int32_t i_2 = 3
                    int32_t i
                    
                    do
                        int32_t esi_1 = *(edi + 0x6c)
                        int32_t eax_54 = *ebx_1 * 9
                        int32_t edi_1 = *(esi_1 + (eax_54 << 2) + 0x10)
                        int32_t esi_2 = *(esi_1 + (eax_54 << 2) + 0xc)
                        
                        if (esi_2 != edi_1)
                            do
                                int32_t* result_4 = result_1
                                int32_t var_98_11 = esi_2
                                int32_t* var_80
                                i_1 = sub_514cb0(&var_5c, &var_80, i_1)
                                esi_2 += 4
                            while (esi_2 != edi_1)
                            
                            i_1 = i_2
                        
                        edi = var_50
                        ebx_1 = &ebx_1[0xa]
                        i = i_1
                        i_1 -= 1
                        i_2 = i_1
                    while (i != 1)
                while (ebx_1 != eax_52)
                
                esi = var_4c
            
            void** eax_55 = *esi
            
            if (eax_55[5] u>= 0x10)
                eax_55 = *eax_55
            
            void** var_6c = eax_55
            int32_t var_1c_5 = 0xf
            int32_t var_20_5 = 0
            var_30 = 0
            sub_403490(&var_30, " "%s" ", 0x6a)
            var_8_7.b = 0xc
            void* ebx_2 = *esi
            int32_t ecx_27 = *(ebx_2 + 0x28)
            void* eax_60 = *(ebx_2 + 0x24)
            int32_t edx_16
            
            if (eax_60 != ecx_27)
                while (true)
                    int32_t edi_2 = 0
                    int32_t* edx_15 = eax_60 + 0xc
                    
                    while (true)
                        int32_t xmm0_1 = *edx_15
                        
                        if (not(0 f>= xmm0_1) && not(xmm0_1 f>= 1f))
                            int32_t xmm0_2 = edx_15[1]
                            
                            if (not(0 f>= xmm0_2) && not(xmm0_2 f>= 1f))
                                edi_2 += 1
                                edx_15 = &edx_15[0xa]
                                
                                if (edi_2 s>= 3)
                                    break
                                
                                continue
                        
                        edx_16 = 1
                        goto label_5bbfd3
                    
                    eax_60 += 0x78
                    
                    if (eax_60 == ecx_27)
                        break
            
            edx_16 = 0
        label_5bbfd3:
            void** eax_64 = sub_5be410(&var_6c, &var_30, &var_48, &var_6c, *(ebx_2 + 0x7c), 
                *(ebx_2 + 0x18), *(ebx_2 + 0x1c), zx.d(*(ebx_2 + 0x75)), zx.d(*(ebx_2 + 0x22)), 
                edx_16, var_58_1, (*(ebx_2 + 0x28) - *(ebx_2 + 0x24)) s/ 0x78)
            var_8_7.b = 0xd
            result = result_2
            sub_4055a0(result, eax_64, 0, 0xffffffff)
            
            if (var_34_4 u>= 0x10)
                sub_403160(var_48.d, var_34_4 + 1, 1)
            
            var_34_4 = 0xf
            int32_t var_38_5 = 0
            var_48 = 0
            
            if (var_1c_5 u>= 0x10)
                sub_403160(var_30.d, var_1c_5 + 1, 1)
            
            var_8_7.b = 0
            int32_t* eax_69 = var_5c
            int32_t* var_94_6 = eax_69
            void var_78
            sub_513f00(&var_5c, &var_78, *eax_69)
            sub_403160(var_5c, 1, 0x14)
            edi = var_50
        else
            sub_407430(result, U"\n", 1)
        
        esi += 4
        var_4c = esi
        
        if (esi == *(edi + 0x64))
            break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
