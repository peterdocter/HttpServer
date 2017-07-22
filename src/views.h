//
// Created by Nyloner on 2016/12/12.
//

#ifndef HTTPSERVER_VIEWS_H
#define HTTPSERVER_VIEWS_H

#include "server.h"

typedef enum FILE_TYPE_ENUM
{
    FILE_TYPE_IMAGE = 0,
    FILE_TYPE_JS,
    FILE_TYPE_TEXT,
    FILE_TYPE_CSS
} REQ_FILE_TYPE;

void accept_request(struct HttpRequest *request);

void not_found(int client);

void site_index(int client);

void static_file(int client, char *path, char *filetype);

char *get_filetype(char *path);

void free_memory(struct KeyValue *request_arg);

void response_headers(int client, int type, struct KeyValue *header);

//type 1-html 2-jpeg 3-js 4-css
void response_file(int client, char *filepath, int type, struct KeyValue *header);

void login(int client, struct KeyValue *post_arg);

char *set_cookie();

void print_key_value(struct KeyValue *p);

#endif //HTTPSERVER_VIEWS_H
