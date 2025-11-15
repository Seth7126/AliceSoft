// 函数: sub_50c7e0
// 地址: 0x50c7e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737b80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_98 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_70 = ebx
uint32_t edi = *(ebx + 0x118)
uint32_t eax_3 = *(ebx + 0x11c)
void* ecx = *(ebx + 0xa0)
*(ebx + 0x228) = 0
uint32_t var_6c = edi
uint32_t var_54 = eax_3
void* eax_4 = sub_4efcc0(ecx)
void* eax_5 = sub_4efcc0(*(ebx + 0xa8))
void* ecx_2 = *(ebx + 0xa4)
void* const var_60 = eax_5
uint32_t eax_6 = sub_4efcc0(ecx_2)
uint32_t var_4c = eax_6
uint32_t var_68 = ebx + 0x120
void* esi = *(eax_6 + 0x44)
sub_555e00(esi, 0x13, 1)
sub_55f4d0(*(esi + 0x80), ebx + 0x120)
void* esi_2 = *(var_4c + 0x44)
sub_555e00(esi_2, 0x13, 1)
void* esi_3 = *(esi_2 + 0x80)

if (*(esi_3 + 0xc4) != 1)
    *(esi_3 + 0xc4) = 1
    sub_55d550(esi_3)
    *(esi_3 + 0xd4) = 1

void* esi_4 = *(var_4c + 0x44)
sub_555e00(esi_4, 0x13, 1)
*(*(esi_4 + 0x80) + 0xf1) = 0
int32_t var_58 = *(ebx + 0x210)
void* esi_5 = *(var_4c + 0x44)
sub_555e00(esi_5, 0x13, 1)
void* esi_6 = *(esi_5 + 0x80)
int32_t eax_12 = var_58

if (*(esi_6 + 0x40) != eax_12)
    *(esi_6 + 0x40) = eax_12
    sub_55d550(esi_6)
    *(esi_6 + 0xd4) = 1

var_58 = *(ebx + 0x214)
void* esi_7 = *(var_4c + 0x44)
sub_555e00(esi_7, 0x13, 1)
void* esi_8 = *(esi_7 + 0x80)
int32_t eax_15 = var_58

if (*(esi_8 + 0x44) != eax_15)
    *(esi_8 + 0x44) = eax_15
    sub_55d550(esi_8)
    *(esi_8 + 0xd4) = 1

uint32_t var_50

if (edi s> 0 && var_54 s> 0)
    void* esi_10 = *(eax_4 + 0x44)
    sub_555e00(esi_10, 0x18, 1)
    sub_54b7a0(*(esi_10 + 0x80))
    void* eax_17 = ebx + 0x1f8
    uint32_t var_b8
    uint32_t var_b4_1
    
    if (*(ebx + 0x208) != 0)
        bool cond:3_1 = *(eax_17 + 0x14) u< 0x10
        var_50 = 0
        var_4c = 0
        
        if (not(cond:3_1))
            eax_17 = *eax_17
        
        sub_44c5f0(eax_17, &var_50, &var_4c)
        uint32_t* eax_31 = &var_50
        
        if (edi s>= var_50)
            eax_31 = &var_6c
        
        uint32_t ebx_3 = *eax_31
        uint32_t* eax_32 = &var_4c
        
        if (var_54 s>= var_4c)
            eax_32 = &var_54
        
        uint32_t edi_2 = *eax_32
        void* esi_14 = *(eax_4 + 0x44)
        sub_555e00(esi_14, 0x18, 1)
        sub_54b7e0(*(esi_14 + 0x80), ebx_3, edi_2)
        uint32_t ecx_26 = var_4c
        uint32_t eax_34 = var_50
        uint32_t var_a4_6 = ecx_26
        uint32_t var_a8_4 = eax_34
        var_b4_1 = ecx_26
        var_b8 = eax_34
        sub_518240(eax_4, ebx + 0x1f8)
    else
        int32_t eax_18 = *(ebx + 0x174)
        int32_t eax_19 = *(ebx + 0x178)
        int32_t eax_20 = *(ebx + 0x17c)
        int32_t eax_21 = *(ebx + 0x180)
        int32_t eax_22 = *(ebx + 0x184)
        int32_t eax_23 = *(ebx + 0x188)
        var_58 = *(ebx + 0x18c)
        var_4c = *(ebx + 0x190)
        var_50 = *(ebx + 0x194)
        void* esi_11 = *(eax_4 + 0x44)
        sub_555e00(esi_11, 0x18, 1)
        int32_t var_9c_2 = sub_54b7e0(*(esi_11 + 0x80), edi, var_54)
        int32_t var_a8_1
        
        if (*(ebx + 0x154) != 0)
            int32_t var_a0_3 = eax_23
            int32_t var_a4_2 = eax_22
            var_a8_1 = eax_21
        else
            int32_t var_a0_2 = eax_20
            int32_t var_a4_1 = eax_19
            var_a8_1 = eax_18
        
        int32_t var_b4
        sub_5181c0(eax_4, var_b8, var_b4, edi, var_54, var_a8_1)
        void* esi_12 = *(eax_4 + 0x44)
        int32_t ebx_2 = var_54 - 2
        sub_555e00(esi_12, 0x18, 1)
        sub_54bd30(*(esi_12 + 0x80), 1, 1, edi - 2, ebx_2, var_58, var_4c, var_50)
        void* esi_13 = *(eax_4 + 0x44)
        sub_555e00(esi_13, 0x18, 1)
        var_b4_1 = 0
        sub_54bd30(*(esi_13 + 0x80), 0, 0, var_6c, var_54, var_58, var_4c, var_50)
    
    void* esi_15 = *(eax_4 + 0x44)
    sub_555e00(esi_15, 0x18, 1)
    sub_54c110(*(esi_15 + 0x80))
    int32_t eax_37 = sub_50f9e0(var_70)
    void* const edi_3 = var_60
    void* esi_16 = *(edi_3 + 0x44)
    sub_555e00(esi_16, 0x18, 1)
    sub_54b7a0(*(esi_16 + 0x80))
    void* esi_17 = *(edi_3 + 0x44)
    sub_555e00(esi_17, 0x18, 1)
    sub_54b7e0(*(esi_17 + 0x80), 1, eax_37)
    uint32_t eax_38 = var_68
    int32_t edi_4 = *(eax_38 + 0x14)
    int32_t ebx_5 = *(eax_38 + 0x10)
    void* esi_19 = *(var_60 + 0x44)
    var_68 = *(eax_38 + 0xc)
    sub_555e00(esi_19, 0x18, 1)
    int32_t var_9c_8 = 0xff
    int32_t var_a0_8 = edi_4
    sub_54bc60(*(esi_19 + 0x80), var_b8, var_b4_1, 1, eax_37, var_68, ebx_5)
    void* esi_20 = *(var_60 + 0x44)
    sub_555e00(esi_20, 0x18, 1)
    sub_54c110(*(esi_20 + 0x80))
    ebx = var_70

var_4c = 0
var_60 = nullptr
sub_50d6d0(ebx, ebx + 0x120, ebx + 0x158, &var_4c, &var_60)
struct 
    common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable**
     eax_43 = sub_4ef140(*(ebx + 0xac))
int32_t* eax_44 = sub_4ef220(*(ebx + 0xb0))
sub_4f7d60(&eax_43[0x33], ebx + 0x1e0)
sub_4f7d60(&eax_44[0x33], ebx + 0x1c8)
int32_t* var_44
sub_5229e0(eax_43, &var_44)
int32_t var_8_1 = 0
int32_t* var_2c
sub_5229e0(eax_44, &var_2c)
var_8_1.b = 1
int32_t* eax_46 = &var_44
int32_t result_1

if (result_1 u>= 0x10)
    eax_46 = var_44

var_58 = 0
var_68 = 0
sub_44c5f0(eax_46, &var_58, &var_68)
int32_t var_48_1

if (*(ebx + 0x1ac) == 0)
    var_48_1 = 0
else
    int32_t eax_47 = var_58
    var_48_1 = eax_47
    
    if (eax_47 == 0)
        var_48_1 = *(ebx + 0xb4)

int32_t var_88 = 0
int32_t* eax_49 = &var_2c
uint32_t var_64 = 0
int32_t var_18

if (var_18 u>= 0x10)
    eax_49 = var_2c

sub_44c5f0(eax_49, &var_88, &var_64)
uint32_t edx

if (*(ebx + 0x1ad) == 0)
    edx = 0
    var_50 = edx
else
    edx = var_64
    var_50 = edx
    
    if (edx == 0)
        edx = *(ebx + 0xb4)
        var_50 = edx

*(*(ebx + 0xac) + 0xaa) = *(ebx + 0x1ac)
uint32_t eax_51 = var_54
uint32_t ecx_50 = eax_51 - edx

if (eax_43[0x40] != ecx_50)
    eax_43[0x40] = ecx_50
    eax_43[0x87].b = 1

if (eax_43[0x41] != var_48_1)
    eax_43[0x41] = var_48_1
    eax_43[0x87].b = 1

if (eax_43[0x42] != var_48_1)
    eax_43[0x42] = var_48_1
    eax_43[0x87].b = 1

if (eax_43[0x43] != var_48_1)
    eax_43[0x43] = var_48_1
    eax_43[0x87].b = 1

void* const ecx_52 = var_60

if (eax_43[0x44] != ecx_52)
    int32_t var_9c_16 = eax_43[0x46]
    eax_43[0x44] = ecx_52
    sub_4f7c10(&eax_43[0x33])
    eax_51 = var_54
    edx = var_50
    eax_43[0x87].b = 1

int32_t* eax_54 = eax_51 - *(ebx + 0x21c) - *(ebx + 0x218) - edx

if (eax_43[0x45] != eax_54)
    int32_t var_9c_17 = eax_43[0x46]
    eax_43[0x45] = eax_54
    sub_4f7c10(&eax_43[0x33])
    edx = var_50
    eax_43[0x87].b = 1

eax_54.b = *(ebx + 0x1ad)
*(*(ebx + 0xb0) + 0xaa) = eax_54.b
uint32_t eax_55 = var_6c
int32_t ecx_56 = var_48_1
var_64 = eax_55 - ecx_56

if (eax_44[0x40] != var_64)
    eax_44[0x40] = var_64
    eax_44[0x87].b = 1

if (eax_44[0x41] != edx)
    eax_44[0x41] = edx
    eax_44[0x87].b = 1

if (eax_44[0x42] != edx)
    eax_44[0x42] = edx
    eax_44[0x87].b = 1

if (eax_44[0x43] != edx)
    eax_44[0x43] = edx
    eax_44[0x87].b = 1

uint32_t edx_1 = var_4c

if (eax_44[0x44] != edx_1)
    int32_t var_9c_18 = eax_44[0x46]
    eax_44[0x44] = edx_1
    sub_4f7c10(&eax_44[0x33])
    eax_55 = var_6c
    ecx_56 = var_48_1
    eax_44[0x87].b = 1

int32_t eax_58 = eax_55 - *(var_70 + 0x224) - *(var_70 + 0x220) - ecx_56

if (eax_44[0x45] != eax_58)
    int32_t var_9c_19 = eax_44[0x46]
    eax_44[0x45] = eax_58
    sub_4f7c10(&eax_44[0x33])
    eax_44[0x87].b = 1

void* eax_59 = sub_4efcc0(*(var_70 + 0xa0))

if (*(eax_59 + 0x40) != 0)
    *(eax_59 + 0x40) = 0

void* eax_60 = sub_4efcc0(*(var_70 + 0xa8))

if (*(eax_60 + 0x40) != 0)
    *(eax_60 + 0x40) = 0

void* eax_61 = sub_4efcc0(*(var_70 + 0xa4))

if (*(eax_61 + 0x40) != 0)
    *(eax_61 + 0x40) = 0

*(*(var_70 + 0xa0) + 0x1a8) = 1

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

int32_t result = result_1
int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c.b = 0

if (result u>= 0x10)
    result = sub_403160(var_44, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
