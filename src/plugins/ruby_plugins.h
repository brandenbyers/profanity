/*
 * ruby_plugins.h
 *
 * Copyright (C) 2012, 2013 James Booth <boothj5@gmail.com>
 *
 * This file is part of Profanity.
 *
 * Profanity is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Profanity is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Profanity.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef RUBY_PLUGINS_H
#define RUBY_PLUGINS_H

#include "plugins/plugins.h"

ProfPlugin* ruby_plugin_create(const char * const filename);

void ruby_init_hook(ProfPlugin *plugin, const char * const version, const char * const status);
void ruby_on_start_hook(ProfPlugin *plugin);
void ruby_on_connect_hook(ProfPlugin *plugin, const char * const account_name, const char * const fulljid);
char * ruby_on_message_received_hook(ProfPlugin *plugin, const char * const jid, const char *message);
char * ruby_on_message_send_hook(ProfPlugin *plugin, const char * const jid, const char *message);
void ruby_on_shutdown_hook(ProfPlugin *plugin);

void ruby_plugin_destroy(ProfPlugin *plugin);
void ruby_check_error(void);

#endif