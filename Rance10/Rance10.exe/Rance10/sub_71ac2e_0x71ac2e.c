// 函数: sub_71ac2e
// 地址: 0x71ac2e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

int32_t* esi_1 = arg1
int32_t edi
int32_t var_30_1 = edi
*arg2 = 0
int32_t* edi_1 = nullptr
int32_t ebx_1 = 0
int32_t* var_24 = nullptr
int32_t var_20_1 = 0
int32_t var_1c_1 = 0
void* var_8
int32_t result

if (*esi_1 != 0)
    do
        var_8.w = 0x3f2a
        var_8:2.b = 0
        void* eax_3 = _strpbrk(*esi_1, &var_8)
        int32_t result_1
        
        if (eax_3 != 0)
            result_1 = sub_71ae54(*esi_1, eax_3, &var_24)
        else
            result_1 = sub_71adbe(*esi_1, 0, nullptr, &var_24)
        
        result = result_1
        
        if (result != 0)
            goto label_71ada3
        
        esi_1 = &esi_1[1]
    while (*esi_1 != 0)
    
    ebx_1 = var_20_1
    edi_1 = var_24

int32_t var_c_1 = 0
void* eax_5 = ebx_1 - edi_1
var_8 = nullptr
int32_t edx_3 = (eax_5 s>> 2) + 1
int32_t var_10_1 = edx_3
int32_t esi_4 = not.d(sbb.d(esi_1, esi_1, ebx_1 u< edi_1)) & (eax_5 + 3) u>> 2

if (esi_4 != 0)
    int32_t* edx_4 = edi_1
    void* ebx_2 = nullptr
    int32_t eax_10
    
    do
        char* ecx_2 = *edx_4
        var_8 = &ecx_2[1]
        void* eax_8
        
        do
            eax_8.b = *ecx_2
            ecx_2 = &ecx_2[1]
        while (eax_8.b != 0)
        ebx_2 = ebx_2 + 1 + ecx_2 - var_8
        edx_4 = &edx_4[1]
        eax_10 = var_c_1 + 1
        var_c_1 = eax_10
    while (eax_10 != esi_4)
    edx_3 = var_10_1
    var_8 = ebx_2
    ebx_1 = var_20_1

int32_t eax_11 = ___acrt_allocate_buffer_for_argv(edx_3, var_8, 1)

if (eax_11 != 0)
    void* eax_13 = eax_11 + (var_10_1 << 2)
    void* edx_5 = eax_13
    void* var_10_2 = edx_5
    
    if (edi_1 != ebx_1)
        int32_t* eax_15 = eax_11 - edi_1
        
        do
            char* ecx_4 = *edi_1
            void* var_c_2 = &ecx_4[1]
            void* eax_16
            
            do
                eax_16.b = *ecx_4
                ecx_4 = &ecx_4[1]
            while (eax_16.b != 0)
            void* var_34_4 = ecx_4 - var_c_2 + 1
            int32_t var_38_4 = *edi_1
            void* var_3c_3 = eax_13 - edx_5 + var_8
            void* var_40_2 = edx_5
            
            if (sub_717fd4() != 0)
                int32_t var_44
                __builtin_memset(&var_44, 0, 0x14)
                __invoke_watson()
                noreturn
            
            *(eax_15 + edi_1) = var_10_2
            edi_1 = &edi_1[1]
            edx_5 = var_10_2 + ecx_4 - var_c_2 + 1
            var_10_2 = edx_5
        while (edi_1 != ebx_1)
    
    result = 0
    *arg2 = eax_11
else
    result = 0xffffffff

__free_base(0)
label_71ada3:
xfd16de3c::argument_list<wchar_t>::operator[]::argument_list<wchar_t>::~argument_list<wchar_t>(
    &var_24)
return result
