// 函数: sub_5fc210
// 地址: 0x5fc210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742250
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_98 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = arg1[0xc]
int32_t eax_5
uint32_t edx_2
eax_5, edx_2 = __allmul(edx - arg1[8], sbb.d(arg1[0xd], arg1[9], edx u< arg1[8]), 0x3e8, 0)
uint32_t eax_6
uint32_t edx_3
eax_6, edx_3 = __alldiv(eax_5, edx_2, data_7fcbe8, data_7fcbec)
uint32_t ebx = eax_6
uint32_t var_84 = ebx
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x76abb8, 0xd)
int32_t var_8_1 = 0
sub_45aae0(&var_2c)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

uint32_t var_7c = ebx
int32_t var_18_1 = 0xf
void* i_1 = nullptr
var_2c = 0
sub_403490(&var_2c, 0x76ac2c, 0x10)
int32_t var_8_3 = 1
var_8_3.b = 2
char var_5c
sub_45aae0(sub_409350(&var_7c, &var_2c, &var_5c, &var_7c))
int32_t var_48

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_8_4 = 0xffffffff
int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

void* var_20
sub_5fc790(&var_20, arg1)
int32_t var_8_5 = 3
int32_t edi = arg1[4]

for (void** i = arg1[3]; i != edi; i = &i[3])
    var_7c.b = 0
    uint32_t var_9c_3 = var_7c
    sub_5fd000(&var_20, i_1, *i, i[1])

void* esi_1 = var_20
char var_78 = 0
int32_t eax_18 = (i_1 - esi_1) s/ 0x38
sub_5fd430(eax_18, i_1, esi_1, eax_18, &var_78)
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, "           ", 0x48)
var_8_5.b = 4
sub_45aae0(&var_44)
var_8_5.b = 3

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
sub_403490(&var_44, "=======================================================================\n", 
    0x48)
var_8_5.b = 5
sub_45aae0(&var_44)
var_8_5.b = 3

if (var_30_1 u>= 0x10)
    sub_403160(var_44.d, var_30_1 + 1, 1)

if (esi_1 != i_1)
    void* esi_2 = esi_1 + 0x20
    
    do
        int32_t edi_2 = *esi_2
        
        if (edi_2 != 0)
            int32_t eax_23
            uint32_t edx_9
            eax_23, edx_9 = __allmul(*(esi_2 + 0x10), *(esi_2 + 0x14), 0x3e8, 0)
            uint32_t eax_24 = __alldiv(eax_23, edx_9, data_7fcbe8, data_7fcbec)
            uint32_t var_88 = eax_24
            
            if (edi_2 s<= 0)
                var_7c = 0
            else
                var_7c = divs.dp.d(sx.q(eax_24 * 0x3e8), edi_2)
            
            uint32_t ebx_1
            
            if (edx_3 s< 0 || (edx_3 s<= 0 && ebx == 0))
                ebx_1 = 0
            else
                int32_t eax_29
                uint32_t edx_12
                edx_12:eax_29 = sx.q(eax_24 * 0x64)
                ebx_1 = __alldiv(eax_29, edx_12, ebx, edx_3)
            
            int32_t var_30_2 = 0xf
            int32_t var_34_2 = 0
            var_44 = 0
            sub_403490(&var_44, "%12d ms | %3d%% | %12d ", 0x2d)
            var_8_5.b = 6
            void* eax_31
            
            if (*(esi_2 - 4) u< 0x10)
                eax_31 = esi_2 - 0x18
            else
                eax_31 = *(esi_2 - 0x18)
            
            var_8_5.b = 7
            char var_74
            sub_45aae0(sub_5fcdb0(&var_88, &var_44, &var_74, &var_88, ebx_1, edi_2, var_7c, eax_31))
            int32_t var_60
            
            if (var_60 u>= 0x10)
                sub_403160(var_74.d, var_60 + 1, 1)
            
            var_8_5.b = 3
            var_60 = 0xf
            int32_t var_64_1 = 0
            var_74 = 0
            
            if (var_30_2 u>= 0x10)
                sub_403160(var_44.d, var_30_2 + 1, 1)
            
            ebx = var_84
        
        esi_2 += 0x38
    while (esi_2 - 0x20 != i_1)

int32_t result = sub_5fc940(&var_20)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
