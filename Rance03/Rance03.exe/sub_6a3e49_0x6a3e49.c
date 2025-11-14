// 函数: sub_6a3e49
// 地址: 0x6a3e49
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 0x64
int32_t var_8 = 0x747f80
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x747f80 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_88 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_88
void* const var_8c_7 = &data_6a3e55
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
__lock(0xb)
int32_t var_8_1 = 0
int32_t var_90 = 0x20
int32_t* i_5 = sub_69e723(0x20, 0x40)
int32_t* i = i_5
int32_t* i_2 = i
int32_t result

if (i != 0)
    data_75ca40 = i_5
    data_75de9c = 0x20
    
    while (i u< &i_5[0x200])
        i[1].w = 0xa00
        *i = 0xffffffff
        i[2] = 0
        i[9].b &= 0x80
        void* eax
        eax.b = i[9].b
        eax.b &= 0x7f
        i[9].b = eax.b
        *(i + 0x25) = 0xa0a
        i[0xe] = 0
        i[0xd].b = 0
        i = &i[0x10]
        int32_t* i_3 = i
        i_5 = data_75ca40
    
    STARTUPINFOW startupInfo
    GetStartupInfoW(&startupInfo)
    BYTE* lpReserved2
    
    if (startupInfo.cbReserved2 != 0)
        lpReserved2 = startupInfo.lpReserved2
    
    if (startupInfo.cbReserved2 == 0 || lpReserved2 == 0)
        int32_t var_8c_3 = 0xfffffffe
    else
        int32_t i_1 = *lpReserved2
        int32_t i_4 = i_1
        void* var_2c_1 = &lpReserved2[4]
        void* var_24_1 = &lpReserved2[4 + i_1]
        
        if (i_1 s>= 0x800)
            i_1 = 0x800
            i_4 = 0x800
        
        int32_t esi_1 = 1
        int32_t var_34_1 = 1
        
        for (; data_75de9c s< i_1; i_1 = i_4)
            int32_t* j = sub_69e723(0x20, 0x40)
            int32_t* j_1 = j
            
            if (j == 0)
                i_1 = data_75de9c
                i_4 = i_1
                break
            
            (&data_75ca40)[esi_1] = j
            data_75de9c += 0x20
            
            while (j u< (&data_75ca40)[esi_1] + 0x800)
                j[1].w = 0xa00
                *j = 0xffffffff
                j[2] = 0
                j[9].b &= 0x80
                *(j + 0x25) = 0xa0a
                j[0xe] = 0
                j[0xd].b = 0
                j = &j[0x10]
                int32_t* j_2 = j
            
            esi_1 += 1
            int32_t var_34_2 = esi_1
        
        int32_t edi_1 = 0
        int32_t var_30_1 = 0
        int32_t var_8c_1 = 0xfffffffe
        void* eax_4 = var_2c_1
        void* edx_1 = var_24_1
        
        while (edi_1 s< i_1)
            HANDLE hFile_1 = *edx_1
            
            if (hFile_1 != 0xffffffff && hFile_1 != 0xfffffffe)
                eax_4.b = *eax_4
                
                if ((eax_4.b & 1) != 0)
                    enum FILE_TYPE eax_5
                    
                    if ((eax_4.b & 8) == 0)
                        eax_5 = GetFileType(hFile_1)
                        edx_1 = var_24_1
                    
                    if ((eax_4.b & 8) != 0 || eax_5 != FILE_TYPE_UNKNOWN)
                        int32_t* esi_5 = ((edi_1 & 0x1f) << 6) + (&data_75ca40)[edi_1 s>> 5]
                        int32_t* var_28 = esi_5
                        *esi_5 = *edx_1
                        void* eax_9
                        eax_9.b = *var_2c_1
                        esi_5[1].b = eax_9.b
                        sub_69f7a9(&esi_5[3], 0xfa0, 0)
                        esi_5[2] += 1
                        edx_1 = var_24_1
                    
                    i_1 = i_4
            
            edi_1 += 1
            int32_t var_30_2 = edi_1
            eax_4 = var_2c_1 + 1
            var_2c_1 = eax_4
            edx_1 += 4
            var_24_1 = edx_1
    
    int32_t edi_2 = 0
    
    while (true)
        int32_t var_30_3 = edi_2
        
        if (edi_2 s>= 3)
            break
        
        int32_t* esi_8 = (edi_2 << 6) + data_75ca40
        int32_t* var_28_1 = esi_8
        
        if (*esi_8 == 0xffffffff || *esi_8 == 0xfffffffe)
            esi_8[1].b = 0x81
            enum STD_HANDLE nStdHandle
            
            if (edi_2 != 0)
                int32_t eax_16 = neg.d(edi_2 - 1)
                nStdHandle = sbb.d(eax_16, eax_16, edi_2 != 1) - 0xb
            else
                int32_t var_8c_4 = 0xfffffff6
                nStdHandle = STD_INPUT_HANDLE
            
            HANDLE hFile = GetStdHandle(nStdHandle)
            enum FILE_TYPE eax_18
            
            if (hFile != 0xffffffff && hFile != 0)
                eax_18 = GetFileType(hFile)
            
            if (hFile == 0xffffffff || hFile == 0 || eax_18 == FILE_TYPE_UNKNOWN)
                esi_8[1].b |= 0x40
                *esi_8 = 0xfffffffe
                int32_t eax_23 = data_75ef60
                
                if (eax_23 != 0)
                    *(*(eax_23 + (edi_2 << 2)) + 0x10) = 0xfffffffe
            else
                *esi_8 = hFile
                int32_t eax_19 = eax_18 & 0xff
                
                if (eax_19 == 2)
                    esi_8[1].b |= 0x40
                else if (eax_19 == 3)
                    esi_8[1].b |= 8
                
                sub_69f7a9(&esi_8[3], 0xfa0, 0)
                esi_8[2] += 1
        else
            esi_8[1].b |= 0x80
        
        edi_2 += 1
    
    int32_t var_8_2 = 0xfffffffe
    sub_6a40f4()
    result = 0
else
    __local_unwind4(&__security_cookie, &ExceptionList, 0xfffffffe)
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6a40f3
return result
