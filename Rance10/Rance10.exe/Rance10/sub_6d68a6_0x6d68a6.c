// 函数: sub_6d68a6
// 地址: 0x6d68a6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_18 = 0
int32_t var_14 = 0
char* ebx = arg1
char* ecx = ebx
void* edx = &ecx[1]
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
int32_t esi = 0
void* edi = ecx - edx + 1

if (ecx - edx != 0xffffffff)
    int32_t eax_1
    void* temp0_1
    
    do
        void var_8
        eax_1 = __Mbrtowc(&var_8, ebx, edi, &var_18, arg2)
        
        if (eax_1 s<= 0)
            break
        
        ebx = &ebx[eax_1]
        esi += 1
        temp0_1 = edi
        edi -= eax_1
    while (temp0_1 != eax_1)
    ebx = arg1

int32_t i_2 = esi + 1
int32_t i_3 = i_2
int16_t* result = _calloc()

if (result == 0)
    sub_6d08ed()
    noreturn

int32_t var_20 = 0
int16_t* result_1 = result
int32_t var_1c = 0

if (i_2 != 0)
    int32_t i_1
    
    do
        int32_t eax_2 = __Mbrtowc(result_1, ebx, ecx - edx + 1, &var_20, arg2)
        
        if (eax_2 s<= 0)
            break
        
        ebx = &ebx[eax_2]
        result_1 = &result_1[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

*result_1 = 0
return result
