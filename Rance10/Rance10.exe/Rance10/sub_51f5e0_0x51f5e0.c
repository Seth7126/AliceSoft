// 函数: sub_51f5e0
// 地址: 0x51f5e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73919f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* var_50 = esi
void** ebx = &esi[0x36]
int32_t* var_2c
sub_4079d0(&esi[0x30], &esi[0x30], &var_2c, ebx)
int32_t var_8_1 = 0
int32_t* i_5 = sub_51fff0(&var_2c)
int32_t arg_4
int32_t edx_1 = arg_4
int32_t arg_8
int32_t ecx_1 = arg_8
int32_t* i_4
void* var_44
int32_t var_30
int32_t result_1

if (edx_1 != ecx_1 && ecx_1 s<= i_5)
    int32_t* eax_4 = &arg_8
    
    if (ecx_1 s>= edx_1)
        eax_4 = &arg_4
    
    int32_t* i_3 = *eax_4
    int32_t* eax_5 = &arg_8
    
    if (edx_1 s>= ecx_1)
        eax_5 = &arg_4
    
    int32_t ebx_1 = *eax_5
    sub_403490(&esi[0x30], 0x75d393, nullptr)
    sub_403490(&esi[0x36], 0x75d389, nullptr)
    void* esi_1 = nullptr
    i_4 = nullptr
    
    if (i_3 s> 0)
        int32_t* edx_2 = var_2c
        i_4 = i_3
        int32_t* i
        
        do
            int32_t* eax_6 = &var_2c
            
            if (result_1 u>= 0x10)
                eax_6 = edx_2
            
            eax_6.b = *(eax_6 + esi_1)
            
            if (eax_6.b u< 0x81 || eax_6.b u> 0x9f)
                eax_6.b += 0x20
                
                if (eax_6.b u<= 0xf)
                    esi_1 += 1
            else
                esi_1 += 1
            
            esi_1 += 1
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    void* var_54_1 = esi_1
    char* ecx_6 = sub_405480(&var_2c, &var_44, 0, esi_1)
    char* var_4c = ecx_6
    
    if (&esi[0x30] != ecx_6)
        int32_t eax_8 = esi[0x35]
        
        if (eax_8 u>= 0x10)
            sub_403160(esi[0x30], eax_8 + 1, 1)
            ecx_6 = var_4c
        
        esi[0x35] = 0xf
        bool cond:4_1 = esi[0x35] u< 0x10
        esi[0x34] = 0
        int32_t* eax_10
        
        if (cond:4_1)
            eax_10 = &esi[0x30]
        else
            eax_10 = esi[0x30]
        
        *eax_10 = 0
        sub_4056a0(&esi[0x30], ecx_6)
    
    var_8_1.b = 0
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    int32_t* i_6 = i_4
    
    if (i_6 s< ebx_1)
        void* i_2 = ebx_1 - i_6
        void* i_1
        
        do
            int32_t* eax_13 = &var_2c
            
            if (result_1 u>= 0x10)
                eax_13 = var_2c
            
            eax_13.b = *(eax_13 + esi_1)
            
            if (eax_13.b u< 0x81 || eax_13.b u> 0x9f)
                eax_13.b += 0x20
                
                if (eax_13.b u<= 0xf)
                    esi_1 += 1
            else
                esi_1 += 1
            
            esi_1 += 1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    int32_t var_1c
    char* ecx_10 = sub_405480(&var_2c, &var_44, esi_1, var_1c - esi_1)
    var_4c = ecx_10
    ebx = &var_50[0x36]
    
    if (ebx != ecx_10)
        int32_t eax_17 = ebx[5]
        
        if (eax_17 u>= 0x10)
            sub_403160(*ebx, eax_17 + 1, 1)
            ecx_10 = var_4c
        
        ebx[5] = 0xf
        bool cond:7_1 = ebx[5] u< 0x10
        ebx[4] = 0
        char* eax_19
        
        if (cond:7_1)
            eax_19 = ebx
        else
            eax_19 = *ebx
        
        *eax_19 = 0
        sub_4056a0(ebx, ecx_10)
    
    var_8_1.b = 0
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    char* eax_23 = sub_405480(&var_2c, &var_44, var_54_1, esi_1 - var_54_1)
    var_54_1.b = var_50[0x3a] == 0
    struct textsurface::CTextSurfaceProperty::VTable* var_8c
    sub_6437f0(&var_8c)
    var_8_1.b = 4
    sub_520410(var_50, &var_8c)
    i_4 = nullptr
    var_4c = nullptr
    esi = var_50
    sub_51f150(esi, &var_8c, eax_23, &i_4, &var_4c, var_54_1.b)
    var_8_1.b = 0
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    i_5 = i_4
    esi[0x42] += i_5

void** edi_3 = sub_4079d0(i_5, &esi[0x30], &var_44, ebx)
var_8_1.b = 5
int32_t* edx_5

if (edi_3[5] u< 0x10)
    edx_5 = edi_3
else
    edx_5 = *edi_3

if (esi[0x59] u< 0x10)
    i_4 = &esi[0x54]
else
    i_4 = esi[0x54]

int32_t ebx_2 = edi_3[4]
int32_t eax_28 = ebx_2

if (esi[0x58] u< ebx_2)
    eax_28 = esi[0x58]

int32_t eax_29 = sub_406ac0(eax_28, edx_5, i_4, eax_28)
int32_t eax_30

if (eax_29 == 0)
    eax_30 = esi[0x58]

int32_t* edi_4

if (eax_29 != 0 || eax_30 u< ebx_2 || eax_30 u> ebx_2)
    if (&esi[0x54] != edi_3)
        sub_403590(&esi[0x54], edi_3, 0, 0xffffffff)
    
    edi_4 = var_50
    sub_508fe0(&esi[0x54], edi_4[0x5a])
    *(edi_4 + 0x1b9) = 1
else
    edi_4 = var_50

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

int32_t result = result_1
edi_4[0x2c] = 0xffffffff
edi_4[0x2d] = 0xffffffff

if (result u>= 0x10)
    result = sub_403160(var_2c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
