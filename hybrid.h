#ifndef SCRYPT_H
#define SCRYPT_H

#ifdef __cplusplus
extern "C" {
#endif


void hybridScryptHash256(const char *input, char *output);

void hybridScryptHash256Stage1(struct work *work);
void hybridScryptHash256Stage2(struct work *work);

#ifdef __cplusplus
}
#endif

#endif
