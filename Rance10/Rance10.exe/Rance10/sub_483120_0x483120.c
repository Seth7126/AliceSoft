// 函数: sub_483120
// 地址: 0x483120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = __alloca_probe(0x1004)
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ea78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1008
int32_t eax_2 = __security_cookie ^ &var_1008
int32_t var_30 = eax_2
int32_t var_1014
fsbase->NtTib.ExceptionList = &var_1014
int32_t* result

if (*(ecx + 0x40) != 0)
    if (sub_483100(ecx) u< arg1)
        do
            void var_1024
            void* var_3c_1 = &var_1024
            void var_4c
            result = sub_6c43c0(&var_1024, &var_1008, *(ecx + 0x40), var_4c)
            
            if (result s<= 0)
                goto label_483165
            
            int32_t var_1018_1 = 0
            int64_t var_1020 = 0
            var_1020.d = 0
            var_1020:4.d = 0
            int32_t var_1018_2 = 0
            int32_t var_100c_1 = 0
            int32_t* esi_1 = *(ecx + 8)
            int32_t* eax_4 = sub_483590(esi_1, esi_1[1], &var_1020)
            int32_t eax_5 = *(ecx + 0xc)
            
            if (0xccccccb - eax_5 u< 1)
                sub_6d0927("list<T> too long")
                noreturn
            
            *(ecx + 0xc) = eax_5 + 1
            esi_1[1] = eax_4
            int32_t var_100c_2 = 0xffffffff
            void* ecx_4 = var_1020.d
            *eax_4[1] = eax_4
            
            if (ecx_4 != 0)
                sub_403160(ecx_4, var_1018_2 - ecx_4, 1)
                var_1020.d = 0
                var_1020:4.d = 0
                int32_t var_1018_3 = 0
            
            void* esi_2 = *(*(ecx + 8) + 4)
            sub_405950(esi_2 + 8, result)
            sub_700660(*(esi_2 + 8), &var_1008, result)
            *(ecx + 0x54) += result
            result = sub_483100(ecx)
        while (result u< arg1)
    
    result.b = 1
else
label_483165:
    result.b = 0

fsbase->NtTib.ExceptionList = var_1014
@__security_check_cookie@4(eax_2 ^ &var_1008)
return result
