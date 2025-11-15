// 函数: sub_6b3540
// 地址: 0x6b3540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t (* ebx)[0x4] = arg1
uint32_t (* var_4)[0x4] = ebx

if (ebx == 0)
    return 

uint32_t ebp_1 = (*ebx)[1]
uint32_t var_8_1 = ebp_1
void* const edi_1

if (ebp_1 == 0)
    edi_1 = nullptr
else
    edi_1 = *(ebp_1 + 0x1c)

int32_t* esi_1 = (*ebx)[0x1a]

if (esi_1 != 0)
    uint32_t (* ecx)[0x4] = *esi_1
    
    if (ecx != 0)
        sub_6b4990(ecx)
        _free(*esi_1)
    
    int32_t* ecx_1 = esi_1[3]
    
    if (ecx_1 != 0)
        sub_6baee0(*ecx_1)
        _free(*esi_1[3])
        _free(esi_1[3])
    
    int32_t* ecx_3 = esi_1[4]
    
    if (ecx_3 != 0)
        sub_6baee0(*ecx_3)
        _free(*esi_1[4])
        _free(esi_1[4])
    
    if (esi_1[0xc] != 0)
        if (edi_1 != 0 && *(edi_1 + 0x10) s> 0)
            int32_t i = 0
            
            do
                (*(*((*(edi_1 + (i << 2) + 0x320) << 2) + &data_77b06c) + 0x10))(
                    *(esi_1[0xc] + (i << 2)))
                i += 1
            while (i s< *(edi_1 + 0x10))
            
            ebp_1 = var_8_1
        
        _free(esi_1[0xc])
    
    if (esi_1[0xd] != 0)
        if (edi_1 != 0 && *(edi_1 + 0x14) s> 0)
            int32_t i_1 = 0
            
            do
                (*(*((*(edi_1 + (i_1 << 2) + 0x520) << 2) + &data_77b060) + 0x10))(
                    *(esi_1[0xd] + (i_1 << 2)))
                i_1 += 1
            while (i_1 s< *(edi_1 + 0x14))
            
            ebx = var_4
        
        _free(esi_1[0xd])
    
    if (esi_1[0xe] != 0)
        if (edi_1 != 0)
            int32_t i_2 = 0
            
            if (*(edi_1 + 0x1c) s> 0)
                int32_t ebx_1 = 0
                
                do
                    sub_6bb6b0(esi_1[0xe] + ebx_1)
                    i_2 += 1
                    ebx_1 += 0x34
                while (i_2 s< *(edi_1 + 0x1c))
                
                ebx = var_4
            
            ebp_1 = var_8_1
        
        _free(esi_1[0xe])
    
    int32_t eax_9 = esi_1[0xf]
    
    if (eax_9 != 0)
        __builtin_memset(eax_9, 0, 0x24)
        _free(eax_9)
    
    _memset(&esi_1[0x14], 0, 0x30)
    
    if (esi_1 != 0xffffffec)
        int32_t eax_11 = esi_1[6]
        
        if (eax_11 != 0)
            _free(eax_11)
        
        int32_t eax_12 = esi_1[7]
        
        if (eax_12 != 0)
            _free(eax_12)
        
        *(esi_1 + 0x14) = 0
        esi_1[7] = 0
    
    if (esi_1 != 0xffffffe0)
        int32_t eax_13 = esi_1[9]
        
        if (eax_13 != 0)
            _free(eax_13)
        
        int32_t eax_14 = esi_1[0xa]
        
        if (eax_14 != 0)
            _free(eax_14)
        
        *(esi_1 + 0x20) = 0
        esi_1[0xa] = 0

if ((*ebx)[2] != 0)
    if (ebp_1 != 0)
        int32_t i_3 = 0
        
        if (*(ebp_1 + 4) s> 0)
            do
                int32_t eax_16 = *((*ebx)[2] + (i_3 << 2))
                
                if (eax_16 != 0)
                    _free(eax_16)
                
                i_3 += 1
            while (i_3 s< *(ebp_1 + 4))
    
    _free((*ebx)[2])
    uint32_t eax_17 = (*ebx)[3]
    
    if (eax_17 != 0)
        _free(eax_17)

if (esi_1 != 0)
    int32_t eax_18 = esi_1[0x10]
    
    if (eax_18 != 0)
        _free(eax_18)
    
    int32_t eax_19 = esi_1[0x11]
    
    if (eax_19 != 0)
        _free(eax_19)
    
    int32_t eax_20 = esi_1[0x12]
    
    if (eax_20 != 0)
        _free(eax_20)
    
    _free(esi_1)

_memset(ebx, 0, 0x70)
