// 函数: sub_492e60
// 地址: 0x492e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72faf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_2c = &fileimage::CFileImageMaker::`vftable'
char* var_28 = nullptr
char* var_24 = nullptr
int32_t var_20 = 0
int32_t var_8_1 = 0
int32_t* eax_3 = data_7fcb80
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = muls.dp.d(0x2aaaaaab, eax_3[1] - *eax_3)
int32_t edx_3 = edx_2 s>> 2
sub_6ca100(&var_2c, (edx_3 u>> 0x1f) + edx_3)
int32_t* esi = data_7fcb80
int32_t edi = esi[1]
char var_11

for (void* i = *esi; i != edi; i += 0x18)
    int32_t eax_8 = *(i + 0x14)
    void* i_8
    
    if (eax_8 u< 0x10)
        i_8 = i
    else
        i_8 = *i
    
    void* i_6
    
    if (eax_8 u< 0x10)
        i_6 = i
    else
        i_6 = *i
    
    int32_t var_40_1 = 0.d
    sub_6ca200(&var_28, var_24, i_6, i_8 + *(i + 0x10))
    var_11 = 0
    sub_4263a0(&var_28, &var_11)

int32_t* ecx_3 = data_7fcb74
int32_t eax_10
int32_t edx_6
edx_6:eax_10 = muls.dp.d(0x2aaaaaab, ecx_3[1] - *ecx_3)
int32_t edx_7 = edx_6 s>> 2
sub_6ca100(&var_2c, (edx_7 u>> 0x1f) + edx_7)
void*** esi_1 = data_7fcb74
int32_t edi_1 = esi_1[1]

for (void** i_1 = *esi_1; i_1 != edi_1; i_1 = &i_1[6])
    int32_t eax_14 = i_1[5]
    void** i_9
    
    if (eax_14 u< 0x10)
        i_9 = i_1
    else
        i_9 = *i_1
    
    char* i_7
    
    if (eax_14 u< 0x10)
        i_7 = i_1
    else
        i_7 = *i_1
    
    int32_t var_40_4 = 0.d
    sub_6ca200(&var_28, var_24, i_7, i_9 + i_1[4])
    var_11 = 0
    sub_4263a0(&var_28, &var_11)

sub_6ca100(&var_2c, *(data_7fcb7c + 4))
int32_t* edi_3 = *data_7fcb7c
int32_t* i_2 = *edi_3

while (i_2 != edi_3)
    sub_6ca100(&var_2c, i_2[4])
    int32_t edx_8 = i_2[0xa]
    void* ecx_9 = &i_2[5]
    int32_t ebx_3 = *(ecx_9 + 0x10)
    void* eax_17
    
    if (edx_8 u< 0x10)
        eax_17 = ecx_9
    else
        eax_17 = *ecx_9
    
    if (edx_8 u>= 0x10)
        ecx_9 = *ecx_9
    
    int32_t var_40_8 = 0.d
    sub_6ca200(&var_28, var_24, ecx_9, eax_17 + ebx_3)
    var_11 = 0
    sub_4263a0(&var_28, &var_11)
    
    if (*(i_2 + 0xd) == 0)
        int32_t* i_3 = i_2[2]
        
        if (*(i_3 + 0xd) != 0)
            int32_t* i_5 = i_2[1]
            
            if (*(i_5 + 0xd) == 0)
                while (i_2 == i_5[2])
                    i_2 = i_5
                    i_5 = i_5[1]
                    
                    if (*(i_5 + 0xd) != 0)
                        break
            
            i_2 = i_5
        else
            i_2 = i_3
            int32_t* i_4 = *i_2
            
            while (*(i_4 + 0xd) == 0)
                i_2 = i_4
                i_4 = *i_2

char* edi_4 = var_28
void* ebx_5 = var_24 - edi_4
int32_t eax_20
int32_t edx_9
edx_9:eax_20 = sx.q(ebx_5)

if ((*(*arg1 + 0x40))(((eax_20 + (edx_9 & 3)) s>> 2) + 1) != 0)
    sub_700660((*(*arg1 + 0xc))(0), edi_4, ebx_5)
    ebx_5.b = 1
else
    ebx_5.b = 0

if (edi_4 != 0)
    sub_403160(edi_4, var_20 - edi_4, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx_5.b
