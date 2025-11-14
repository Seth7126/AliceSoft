// 函数: sub_5205f0
// 地址: 0x5205f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2da0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_28 = ebp
struct fileimage::CFileImageMaker::VTable* const var_1c = &fileimage::CFileImageMaker::`vftable'
char* var_18 = nullptr
char* var_14 = nullptr
int32_t var_10 = 0
int32_t var_4 = 0
int32_t ebx = *(ebp + 0x24)
uint8_t var_2d = ebx.b
sub_414b60(&var_18, &var_2d)
var_2d = (ebx u>> 8).b
sub_414b60(&var_18, &var_2d)
var_2d = (ebx u>> 0x10).b
sub_414b60(&var_18, &var_2d)
var_2d = (ebx u>> 0x18).b
sub_414b60(&var_18, &var_2d)
int32_t* eax_7 = *(ebp + 0x20)
int32_t ecx_4 = var_10
char* edi = var_14
char* ebx_2 = var_18
int32_t* i = *eax_7

if (i != eax_7)
    do
        int32_t edx_1 = i[4]
        int32_t var_2c_1 = edx_1
        char var_36 = edx_1.b
        
        if (&var_36 u>= edi || ebx_2 u> &var_36)
            if (edi == ecx_4)
                sub_403590(&var_18, 1)
                ecx_4 = var_10
                edi = var_14
                ebx_2 = var_18
                edx_1 = var_2c_1
            
            if (edi != 0)
                *edi = edx_1.b
        else
            void* ebp_1 = &var_36 - ebx_2
            
            if (edi == ecx_4)
                sub_403590(&var_18, 1)
                ecx_4 = var_10
                edi = var_14
                ebx_2 = var_18
                edx_1 = var_2c_1
            
            if (edi != 0)
                *edi = *(ebx_2 + ebp_1)
        
        void* edi_1 = &edi[1]
        uint32_t eax_10 = edx_1 u>> 8
        char var_35 = eax_10.b
        
        if (&var_35 u>= edi_1 || ebx_2 u> &var_35)
            if (edi_1 == ecx_4)
                sub_403590(&var_18, 1)
                ecx_4 = var_10
                ebx_2 = var_18
                edx_1 = var_2c_1
            
            if (edi_1 != 0)
                *edi_1 = eax_10.b
        else
            int32_t ebp_2 = &var_35 - ebx_2
            
            if (edi_1 == ecx_4)
                sub_403590(&var_18, 1)
                ecx_4 = var_10
                ebx_2 = var_18
                edx_1 = var_2c_1
            
            if (edi_1 != 0)
                eax_10.b = ebx_2[ebp_2]
                *edi_1 = eax_10.b
        
        void* edi_2 = edi_1 + 1
        uint32_t eax_12 = edx_1 u>> 0x10
        char var_34 = eax_12.b
        
        if (&var_34 u>= edi_2 || ebx_2 u> &var_34)
            if (edi_2 == ecx_4)
                sub_403590(&var_18, 1)
                ecx_4 = var_10
                ebx_2 = var_18
                edx_1 = var_2c_1
            
            if (edi_2 != 0)
                *edi_2 = eax_12.b
        else
            int32_t ebp_3 = &var_34 - ebx_2
            
            if (edi_2 == ecx_4)
                sub_403590(&var_18, 1)
                ecx_4 = var_10
                ebx_2 = var_18
                edx_1 = var_2c_1
            
            if (edi_2 != 0)
                eax_12.b = ebx_2[ebp_3]
                *edi_2 = eax_12.b
        
        void* edi_3 = edi_2 + 1
        uint32_t edx_2 = edx_1 u>> 0x18
        char var_33 = edx_2.b
        
        if (&var_33 u>= edi_3 || ebx_2 u> &var_33)
            if (edi_3 == ecx_4)
                sub_403590(&var_18, 1)
                ecx_4 = var_10
                ebx_2 = var_18
            
            if (edi_3 != 0)
                *edi_3 = edx_2.b
        else
            int32_t ebp_4 = &var_33 - ebx_2
            
            if (edi_3 == ecx_4)
                sub_403590(&var_18, 1)
                ecx_4 = var_10
                ebx_2 = var_18
            
            if (edi_3 != 0)
                *edi_3 = ebx_2[ebp_4]
        
        edi = edi_3 + 1
        var_14 = edi
        
        if (*(i + 0xd) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0xd) != 0)
                int32_t* i_4 = i[1]
                
                if (*(i_4 + 0xd) == 0)
                    while (i == i_4[2])
                        i = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0xd) != 0)
                            break
                
                i = i_4
            else
                i = i_2
                int32_t* i_3 = *i
                
                while (*(i_3 + 0xd) == 0)
                    i = i_3
                    i_3 = *i
        
        ebp = var_28
    while (i != *(ebp + 0x20))

int32_t edx_3 = *(ebp + 0x2c)
int32_t var_2c_3 = edx_3
char var_32 = edx_3.b

if (&var_32 u>= edi || ebx_2 u> &var_32)
    if (edi == ecx_4)
        sub_403590(&var_18, 1)
        ecx_4 = var_10
        edi = var_14
        ebx_2 = var_18
        edx_3 = var_2c_3
    
    if (edi != 0)
        *edi = edx_3.b
else
    char* esi = &var_32 - ebx_2
    
    if (edi == ecx_4)
        sub_403590(&var_18, 1)
        ecx_4 = var_10
        edi = var_14
        ebx_2 = var_18
        edx_3 = var_2c_3
    
    if (edi != 0)
        *edi = *(esi + ebx_2)

void* edi_4 = &edi[1]
uint32_t eax_16 = edx_3 u>> 8
char var_31 = eax_16.b

if (&var_31 u>= edi_4 || ebx_2 u> &var_31)
    if (edi_4 == ecx_4)
        sub_403590(&var_18, 1)
        ecx_4 = var_10
        ebx_2 = var_18
        edx_3 = var_2c_3
    
    if (edi_4 != 0)
        *edi_4 = eax_16.b
else
    char* esi_1 = &var_31 - ebx_2
    
    if (edi_4 == ecx_4)
        sub_403590(&var_18, 1)
        ecx_4 = var_10
        ebx_2 = var_18
        edx_3 = var_2c_3
    
    if (edi_4 != 0)
        eax_16.b = *(esi_1 + ebx_2)
        *edi_4 = eax_16.b

void* edi_5 = edi_4 + 1
uint32_t eax_18 = edx_3 u>> 0x10
char var_30 = eax_18.b

if (&var_30 u>= edi_5 || ebx_2 u> &var_30)
    if (edi_5 == ecx_4)
        sub_403590(&var_18, 1)
        ecx_4 = var_10
        ebx_2 = var_18
        edx_3 = var_2c_3
    
    if (edi_5 != 0)
        *edi_5 = eax_18.b
else
    char* esi_2 = &var_30 - ebx_2
    
    if (edi_5 == ecx_4)
        sub_403590(&var_18, 1)
        ecx_4 = var_10
        ebx_2 = var_18
        edx_3 = var_2c_3
    
    if (edi_5 != 0)
        eax_18.b = *(esi_2 + ebx_2)
        *edi_5 = eax_18.b

void* edi_6 = edi_5 + 1
uint32_t edx_4 = edx_3 u>> 0x18
char var_2f = edx_4.b

if (&var_2f u>= edi_6 || ebx_2 u> &var_2f)
    if (edi_6 == ecx_4)
        sub_403590(&var_18, 1)
        ebx_2 = var_18
    
    if (edi_6 != 0)
        *edi_6 = edx_4.b
else
    char* esi_3 = &var_2f - ebx_2
    
    if (edi_6 == ecx_4)
        sub_403590(&var_18, 1)
        ebx_2 = var_18
    
    if (edi_6 != 0)
        *edi_6 = *(esi_3 + ebx_2)

int32_t** eax_20 = *(ebp + 0x28)
void* edi_7 = edi_6 + 1
void* var_14_7 = edi_7
int32_t* i_1 = *eax_20

if (i_1 != eax_20)
    char var_2e = 0
    
    do
        int32_t eax_21 = i_1[9]
        int32_t* ecx_21 = &i_1[4]
        int32_t ebx_3 = ecx_21[4]
        int32_t* edx_5
        
        if (eax_21 u< 0x10)
            edx_5 = ecx_21
        else
            edx_5 = *ecx_21
        
        if (eax_21 u>= 0x10)
            ecx_21 = *ecx_21
        
        int32_t var_50_4 = arg2.d
        sub_468ff0(&var_18, edi_7, ecx_21, ebx_3 + edx_5)
        char* edi_8 = var_14_7
        ebx_2 = var_18
        
        if (&var_2e u>= edi_8 || ebx_2 u> &var_2e)
            if (edi_8 == var_10 && var_10 - edi_8 u< 1)
                if (ebx_2 - edi_8 - 1 u< 1)
                    sub_69a551("vector<T> too long")
                    noreturn
                
                void* ecx_28 = var_10 - ebx_2
                uint32_t edx_9 = ecx_28 u>> 1
                uint32_t ecx_29
                
                if (0xffffffff - edx_9 u>= ecx_28)
                    ecx_29 = ecx_28 + edx_9
                else
                    ecx_29 = 0
                
                if (ecx_29 u< edi_8 - ebx_2 + 1)
                    ecx_29 = edi_8 - ebx_2 + 1
                
                sub_403640(&var_18, ecx_29)
                edi_8 = var_14_7
                ebx_2 = var_18
            
            if (edi_8 != 0)
                *edi_8 = 0
        else
            int32_t ebp_5 = &var_2e - ebx_2
            
            if (edi_8 == var_10 && var_10 - edi_8 u< 1)
                if (ebx_2 - edi_8 - 1 u< 1)
                    sub_69a551("vector<T> too long")
                    noreturn
                
                void* ecx_24 = var_10 - ebx_2
                uint32_t edx_7 = ecx_24 u>> 1
                void* ecx_25
                
                if (0xffffffff - edx_7 u>= ecx_24)
                    ecx_25 = ecx_24 + edx_7
                else
                    ecx_25 = nullptr
                
                if (ecx_25 u< edi_8 - ebx_2 + 1)
                    ecx_25 = edi_8 - ebx_2 + 1
                
                sub_403640(&var_18, ecx_25)
                edi_8 = var_14_7
                ebx_2 = var_18
            
            if (edi_8 != 0)
                void* eax_23
                eax_23.b = ebx_2[ebp_5]
                *edi_8 = eax_23.b
            
            ebp = var_28
        
        edi_7 = &edi_8[1]
        var_14_7 = edi_7
        
        if (*(i_1 + 0xd) == 0)
            int32_t* i_5 = i_1[2]
            
            if (*(i_5 + 0xd) != 0)
                int32_t* i_7 = i_1[1]
                
                if (*(i_7 + 0xd) == 0)
                    while (i_1 == i_7[2])
                        i_1 = i_7
                        i_7 = i_7[1]
                        
                        if (*(i_7 + 0xd) != 0)
                            break
                
                i_1 = i_7
            else
                i_1 = i_5
                int32_t* i_6 = *i_1
                
                while (*(i_6 + 0xd) == 0)
                    i_1 = i_6
                    i_6 = *i_1
    while (i_1 != *(ebp + 0x28))

struct passregister::CZlibCompressor::VTable* const var_24_5 =
    &passregister::CZlibCompressor::`vftable'
int32_t var_20 = 0
var_4.b = 1
struct IDecompressor::nutria::CZlibDecompressor::VTable** ebp_6 = sub_620e90(0x6e31e0)
struct IDecompressor::nutria::CZlibDecompressor::VTable** var_20_1 = ebp_6
struct IDecompressor::nutria::CZlibDecompressor::VTable** result
int32_t edi_13

if (ebp_6 != 0)
    edi_13 = edi_7 - ebx_2
    result = (*ebp_6)->vFunc_2(ebx_2, edi_13)

if (ebp_6 == 0 || result == 0)
    arg2 = 0
else
    int32_t* esi_4 = arg2.d
    sub_403540(esi_4, (*result)->__offset(0x14).d(eax_2))
    int32_t eax_36 = *esi_4
    arg2.d = eax_36
    
    if (eax_36 != esi_4[1])
        sub_69d850(arg2.d, (*result)->__offset(0x18).d((*result)->__offset(0x14).d()))
    
    *arg3 = edi_13
    (*result)->vFunc_1()
    arg2 = 1

var_4.b = 0

if (ebp_6 != 0)
    (*ebp_6)->vFunc_1(eax_2)

if (ebx_2 != 0)
    j__free(ebx_2)

result.b = arg2
fsbase->NtTib.ExceptionList = ExceptionList
return result
