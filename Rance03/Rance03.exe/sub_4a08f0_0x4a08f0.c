// 函数: sub_4a08f0
// 地址: 0x4a08f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg2
void* eax_1
eax_1.b = *(*(*arg1 + 0x160) + 0x8d)

if (*(esi + 0x8d) != eax_1.b)
    *(esi + 0x8d) = eax_1.b
    *(esi + 0x70) = 1

void* ecx = *(*arg1 + 0x160)
void* eax_3 = *(ecx + 0xd8)

if (eax_3 == 0)
    int32_t eax_6 = *(*(*(ecx + 0x50) + 0x58) + 0x90)
    
    if (eax_6 s<= 0)
        eax_3 = nullptr
    else
        int32_t var_2c_1 = eax_6
        void* eax_7 = sub_4a56f0(*(ecx + 0x54))
        
        if (eax_7 == 0)
            eax_3 = nullptr
        else
            eax_3 = sub_4a2ab0(eax_7)
            
            if (eax_3 == 0)
                eax_3 = nullptr

sub_4a2af0(esi, eax_3)
int32_t eax_8 = sub_4a2720(*(*arg1 + 0x160))
arg2 = eax_8
int32_t* ecx_6 = &arg2
int32_t var_18 = 0xff
int32_t var_14 = 0

if (eax_8 s>= 0xff)
    ecx_6 = &var_18

int32_t* eax_9 = &var_14

if (*ecx_6 s> 0)
    eax_9 = ecx_6

int32_t eax_10 = *eax_9

if (*(esi + 0x90) != eax_10)
    *(esi + 0x90) = eax_10
    *(esi + 0x70) = 1

int32_t eax_13 = *(*(*arg1 + 0x160) + 0xf0)

if (*(esi + 0xf0) != eax_13)
    *(esi + 0xf0) = eax_13
    *(esi + 0x70) = 1

void* eax_15
eax_15.b = *(*(*arg1 + 0x160) + 0xf4)

if (*(esi + 0xf4) != eax_15.b)
    *(esi + 0xf4) = eax_15.b
    *(esi + 0x70) = 1

void* esi_1 = *(*arg1 + 0x160)
int32_t eax_17 = sub_4a1bb0(esi_1)
var_14 = 0xff
int32_t ebx_2 = eax_17 + *(esi_1 + 0xa0)
arg2 = ebx_2
int32_t eax_18 = sub_4a1b50(esi_1)
int32_t var_10 = 0xff
int32_t edi_1 = eax_18 + *(esi_1 + 0x9c)
var_18 = edi_1
int32_t eax_19 = sub_4a1af0(esi_1)
int32_t var_8 = 0xff
int32_t edx_1 = eax_19 + *(esi_1 + 0x98)
int32_t var_c = edx_1
int32_t* ecx_10 = &arg2

if (ebx_2 s>= 0xff)
    ecx_10 = &var_14

int32_t* eax_20 = &var_18
int32_t var_2c_3 = *ecx_10

if (edi_1 s>= 0xff)
    eax_20 = &var_10

int32_t var_30 = *eax_20
int32_t* eax_21 = &var_c

if (edx_1 s>= 0xff)
    eax_21 = &var_8

sub_4b7960(esi + 0x6c, *eax_21)
void* edi_2 = *(*arg1 + 0x160)
int32_t eax_25 = *(*(*(edi_2 + 0x50) + 0x58) + 0x90)
void* eax_26

if (eax_25 s> 0)
    int32_t var_2c_4 = eax_25
    eax_26 = sub_4a56f0(*(edi_2 + 0x54))

if (eax_25 s<= 0 || eax_26 == 0)
    arg2 = 0xff
else
    arg2 = sub_4a2850(eax_26)

int32_t eax_30 = *(*(*(edi_2 + 0x50) + 0x58) + 0x90)
void* eax_31

if (eax_30 s> 0)
    int32_t var_2c_5 = eax_30
    eax_31 = sub_4a56f0(*(edi_2 + 0x54))

if (eax_30 s<= 0 || eax_31 == 0)
    var_18 = 0xff
else
    var_18 = sub_4a2800(eax_31)

int32_t eax_35 = *(*(*(edi_2 + 0x50) + 0x58) + 0x90)
void* eax_36

if (eax_35 s> 0)
    int32_t var_2c_6 = eax_35
    eax_36 = sub_4a56f0(*(edi_2 + 0x54))

int32_t ebx_3

if (eax_35 s<= 0 || eax_36 == 0)
    ebx_3 = 0xff
else
    ebx_3 = sub_4a27b0(eax_36)

int32_t var_2c_7 = *(edi_2 + 0xac) * arg2 s/ 0xff
int32_t var_30_1 = *(edi_2 + 0xa8) * var_18 s/ 0xff
sub_4b7a20(esi + 0x6c, *(edi_2 + 0xa4) * ebx_3 s/ 0xff)
int32_t eax_49 = *(*(*arg1 + 0x160) + 0xb0)

if (*(esi + 0xb0) != eax_49)
    *(esi + 0xb0) = eax_49
    *(esi + 0x70) = 1

int32_t eax_52 = *(*(*arg1 + 0x160) + 0xf8)

if (*(esi + 0xf8) != eax_52)
    *(esi + 0xf8) = eax_52
    *(esi + 0x70) = 1

void* result
result.b = *(*(*arg1 + 0x160) + 0x47d)

if (*(esi + 0x47d) != result.b)
    *(esi + 0x47d) = result.b
    *(esi + 0x70) = 1

return result
