// 函数: sub_431620
// 地址: 0x431620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_72a4c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_80
int32_t eax_2 = __security_cookie ^ &var_80
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
int32_t* var_90 = ebx
int32_t var_98
int32_t var_ac = var_98
void* edi = &ebx[8]
int32_t* var_b0 = arg1
sub_417d50(*edi, ebx[9])
*(edi + 4) = *edi
bool cond:0 = *arg2 != 0
int32_t var_54 = 0xf
int32_t var_58 = 0
char var_68 = 0
void* ecx_1

if (cond:0)
    char* ecx_2 = arg2
    int32_t eax_3
    
    do
        eax_3.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_3.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_403490(&var_68, arg2, ecx_1)
int32_t var_84_1 = 0
int32_t eax_4 = *ebx
char var_50
int32_t var_3c
char var_38
int32_t var_24

if (var_58 != 0)
    int32_t edi_2 = 0
    int32_t eax_12 = (*(eax_4 + 0x14))(eax_2)
    
    if (eax_12 s> 0)
        do
            sub_42f9e0(ebx, &var_50, edi_2)
            var_84_1.b = 3
            sub_430ec0(&var_38)
            var_84_1.b = 4
            char var_20
            sub_430ec0(&var_20)
            var_84_1.b = 5
            int32_t var_28
            void* var_10
            int32_t var_c
            
            if (var_28 u>= var_10)
                char* edx_3 = sub_405480(&var_38, &var_80, var_28 - var_10, var_10)
                
                if (*(edx_3 + 0x14) u>= 0x10)
                    edx_3 = *edx_3
                
                int32_t* ecx_13 = &var_20
                void* ebx_2 = edx_3[0x10].d
                void* eax_22 = ebx_2
                
                if (var_c u>= 0x10)
                    ecx_13 = var_20.d
                
                if (var_10 u< ebx_2)
                    eax_22 = var_10
                
                int32_t esi_2 = sub_406ac0(eax_22, edx_3, ecx_13, eax_22)
                
                if (esi_2 == 0)
                    bool c_1 = ebx_2 u< var_10
                    
                    if (ebx_2 == var_10 || c_1)
                        esi_2 = neg.d(sbb.d(esi_2, esi_2, c_1))
                    else
                        esi_2 = 0xffffffff
                
                int32_t var_6c
                
                if (var_6c u>= 0x10)
                    sub_403160(var_80, var_6c + 1, 1)
                
                if (esi_2 == 0)
                    var_84_1.b = 6
                    sub_431bd0(edi, sub_430d00(&var_80, &var_50))
                    
                    if (var_6c u>= 0x10)
                        sub_403160(var_80, var_6c + 1, 1)
                
                if (var_c u>= 0x10)
                    sub_403160(var_20.d, var_c + 1, 1)
                
                var_c = 0xf
                var_10 = nullptr
                var_20 = 0
                
                if (var_24 u>= 0x10)
                    sub_403160(var_38.d, var_24 + 1, 1)
                
                var_84_1.b = 0
                var_24 = 0xf
                var_28 = 0
                var_38 = 0
                
                if (var_3c u>= 0x10)
                    sub_403160(var_50.d, var_3c + 1, 1)
                
                ebx = var_90
            else
                if (var_c u>= 0x10)
                    sub_403160(var_20.d, var_c + 1, 1)
                
                var_c = 0xf
                var_10 = nullptr
                var_20 = 0
                
                if (var_24 u>= 0x10)
                    sub_403160(var_38.d, var_24 + 1, 1)
                
                var_84_1.b = 0
                var_24 = 0xf
                var_28 = 0
                var_38 = 0
                
                if (var_3c u>= 0x10)
                    sub_403160(var_50.d, var_3c + 1, 1)
            edi_2 += 1
        while (edi_2 s< eax_12)
else
    int32_t esi_1 = 0
    int32_t eax_5 = (*(eax_4 + 0x14))(eax_2)
    
    if (eax_5 s> 0)
        do
            var_84_1.b = 1
            var_84_1.b = 2
            sub_431bd0(&ebx[8], sub_430d00(&var_50, sub_42f9e0(ebx, &var_38, esi_1)))
            
            if (var_3c u>= 0x10)
                sub_403160(var_50.d, var_3c + 1, 1)
            
            var_84_1.b = 0
            var_3c = 0xf
            int32_t var_40_1 = 0
            var_50 = 0
            
            if (var_24 u>= 0x10)
                sub_403160(var_38.d, var_24 + 1, 1)
            
            esi_1 += 1
        while (esi_1 s< eax_5)
int32_t eax_37
int32_t edx_5
edx_5:eax_37 = muls.dp.d(0x2aaaaaab, *(edi + 4) - *edi)
int32_t edx_6 = edx_5 s>> 2

if (var_54 u>= 0x10)
    sub_403160(var_68.d, var_54 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return (edx_6 u>> 0x1f) + edx_6
