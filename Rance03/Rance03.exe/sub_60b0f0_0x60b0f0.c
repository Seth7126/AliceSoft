// 函数: sub_60b0f0
// 地址: 0x60b0f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_50
int32_t eax_1 = __security_cookie ^ &var_50
int32_t ebx
int32_t var_54 = ebx
int32_t* esi = arg1
int32_t i = 0
int32_t* var_4c = esi

do
    int32_t j = 0
    int32_t ebx_2
    ebx_2.b = i != 0
    int32_t var_40_1 = ebx_2
    
    do
        int32_t var_38
        _memset(&var_38, 0, 0x34)
        var_38 = ebx_2
        int32_t var_30_1 = 4
        int32_t var_2c_1 = 0
        int128_t var_24
        __builtin_memcpy(&var_24, 
            "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x08\x00\x00\x00\x01\x00\x00\x00\x01\x00\x"
        "00\x00\x01\x00\x00\x00\x08\x00\x00\x00", 
            0x20)
        int32_t eax_2
        eax_2.b = j != 0
        int16_t var_28_1 = 0xffff
        int32_t var_34_1 = eax_2
        int32_t* eax_3 = esi[2]
        var_50 = 0
        
        if ((*(*eax_3 + 0x54))(eax_3, &var_38, &var_50) s< 0)
            int32_t eax_4
            eax_4.b = 0
            sub_69a5bc(eax_1 ^ &var_50)
            return eax_4
        
        void** edx_1 = esi[9]
        void** esi_1 = edx_1
        arg1 = i << 1 | j
        int32_t* var_3c = arg1
        void** eax_5 = edx_1[1]
        
        while (*(eax_5 + 0xd) == 0)
            if (eax_5[4] s>= arg1)
                esi_1 = eax_5
                eax_5 = *eax_5
            else
                eax_5 = eax_5[2]
        
        if (esi_1 == edx_1 || arg1 s< esi_1[4])
            int32_t* var_64_2 = arg1
            int32_t* var_48 = &var_3c
            int32_t** var_68_2 = &var_48
            int32_t* eax_6 = sub_4203f0(arg1)
            void** var_44
            sub_4308b0(&esi[9], &var_44, esi_1, &eax_6[4], eax_6)
            esi_1 = var_44
        
        j += 1
        ebx_2 = var_40_1
        esi_1[5] = var_50
        esi = var_4c
    while (j s<= 1)
    
    i += 1
while (i s<= 1)

int32_t eax_8
eax_8.b = 1
sub_69a5bc(eax_1 ^ &var_50)
return eax_8
