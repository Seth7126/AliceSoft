// 函数: sub_5b9bd0
// 地址: 0x5b9bd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f7f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_8
int32_t esi = arg_8
int32_t arg_c
int32_t eax_3 = sub_5c2010(arg1 + 0x48, esi, arg_c)
arg_c = eax_3
void* eax_4 = sub_5c2090(arg1 + 0x48, esi, eax_3)

if (eax_4 == 0)
    eax_4.b = 0
else
    eax_4.b = *(eax_4 + 0x44)

char var_11 = eax_4.b
char* var_18
void arg_10
int32_t arg_14
sub_5be1f0(&arg_8, arg2, &var_18, &arg_8, &arg_c, &arg_10, &arg_14, &var_11)
int32_t var_8_1 = 0
int32_t* var_34 = nullptr
int32_t var_30 = 0
var_34 = sub_4f2cd0()
void* edi_1 = arg1
var_8_1.b = 1
char* ebx = var_18
int32_t* esi_1 = *arg3
int32_t* var_20 = esi_1
char arg_17

if (esi_1 != arg3[1])
    while (true)
        int32_t var_24_1 = 0
        int32_t* eax_8 = esi_1
        int32_t* var_28_1 = esi_1
        
        while (true)
            int32_t ecx_3 = *eax_8
            
            if (ecx_3 s>= 0)
                int32_t eax_9
                int32_t edx_3
                edx_3:eax_9 = muls.dp.d(0x38e38e39, *(edi_1 + 0x70) - *(edi_1 + 0x6c))
                int32_t edx_4 = edx_3 s>> 3
                
                if (ecx_3 s< (edx_4 u>> 0x1f) + edx_4)
                    int32_t eax_13 = *(edi_1 + 0x6c)
                    int32_t ecx_4 = ecx_3 * 9
                    int32_t edi_2 = *(eax_13 + (ecx_4 << 2) + 0x10)
                    
                    for (int32_t i = *(eax_13 + (ecx_4 << 2) + 0xc); i != edi_2; i += 4)
                        int32_t var_50_3 = arg_14
                        int32_t i_1 = i
                        int32_t* var_3c
                        ecx_4 = sub_514cb0(&var_34, &var_3c, ecx_4)
                    
                    int32_t edx_6 = var_24_1 + 1
                    edi_1 = arg1
                    eax_8 = &var_28_1[0xa]
                    var_24_1 = edx_6
                    var_28_1 = eax_8
                    
                    if (edx_6 s>= 3)
                        break
                    
                    continue
            
            arg_17 = 0
            goto label_5b9e03
        
        if (var_30 s<= *(edi_1 + 0x44))
            sub_5bc680(&ebx[0x24], var_20)
            esi_1 = &var_20[0x1e]
            var_20 = esi_1
        else
            void* var_50_4 = edi_1 + 0x6c
            sub_5c33c0(ebx)
            sub_5be280(edi_1 + 0x60, &var_18)
            char* var_2c
            char** eax_18 =
                sub_5be1f0(&arg_8, arg2, &var_2c, &arg_8, &arg_c, &arg_10, &arg_14, &var_11)
            
            if (&var_18 == eax_18)
                ebx = var_18
            else
                char* esi_2 = var_18
                ebx = *eax_18
                *eax_18 = nullptr
                var_18 = ebx
                
                if (esi_2 != 0)
                    sub_5bd030(esi_2)
                    int32_t var_50_7 = 0x80
                    operator new(esi_2)
            
            char* esi_3 = var_2c
            
            if (esi_3 != 0)
                sub_5bd030(esi_3)
                int32_t var_50_8 = 0x80
                operator new(esi_3)
            
            var_8_1.b = 2
            sub_4f2d00(var_34[1])
            int32_t* eax_20 = var_34
            esi_1 = var_20
            eax_20[1] = eax_20
            int32_t* eax_21 = var_34
            *eax_21 = eax_21
            int32_t* eax_22 = var_34
            var_8_1.b = 1
            eax_22[2] = eax_22
            var_30 = 0
        
        if (esi_1 == arg3[1])
            break

void* var_50_11 = edi_1 + 0x6c
sub_5c33c0(ebx)
sub_5be280(edi_1 + 0x60, &var_18)
ebx = var_18
arg_17 = 1
label_5b9e03:
int32_t* eax_25 = var_34
int32_t* var_50_13 = eax_25
sub_513f00(&var_34, &arg_10, *eax_25)
sub_403160(var_34, 1, 0x14)

if (ebx != 0)
    sub_5bd030(ebx)
    int32_t var_50_14 = 0x80
    operator new(ebx)

int32_t result
result.b = arg_17
fsbase->NtTib.ExceptionList = ExceptionList
return result
